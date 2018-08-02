#
# $Id: utils.rb,v 1.12 2003/06/03 18:46:47 mneumann Exp $
#

module DBI
module Utils

  module ConvParam
    def conv_param(*params)
      params.collect do |p|
        case p
        when ::Date
          DBI::Date.new(p)
        when ::Time
          DBI::Timestamp.new(p)
        else
          p
        end
      end
    end
  end


  def Utils.measure
    start = ::Time.now
    yield
    ::Time.now - start
  end
  
  ##
  # parse a string of the form "database=xxx;key=val;..."
  # or database:host and return hash of key/value pairs
  #
  # improved by John Gorman <jgorman@webbysoft.com>
  def Utils.parse_params(str)
    params = str.split(";")
    hash = {}
    params.each do |param| 
      key, val = param.split("=") 
      hash[key] = val if key and val
    end 
    if hash.empty?
      database, host = str.split(":")
      hash['database'] = database if database
      hash['host']     = host if host   
    end
    hash 
  end


module XMLFormatter
  def XMLFormatter.row(dbrow, rowtag="row", output=STDOUT)
    #XMLFormatter.extended_row(dbrow, "row", [],  
    output << "<#{rowtag}>\n"
    dbrow.each_with_name do |val, name|
      output << "  <#{name}>" + textconv(val) + "</#{name}>\n" 
    end
    output << "</#{rowtag}>\n"
  end

  # nil in cols_as_tag, means "all columns expect those listed in cols_in_row_tag"
  # add_row_tag_attrs are additional attributes which are inserted into the row-tag
  def XMLFormatter.extended_row(dbrow, rowtag="row", cols_in_row_tag=[], cols_as_tag=nil, add_row_tag_attrs={}, output=STDOUT)
    if cols_as_tag.nil?
      cols_as_tag = dbrow.column_names - cols_in_row_tag
    end

    output << "<#{rowtag}"
    add_row_tag_attrs.each do |key, val|  
      # TODO: use textconv ? " substitution?
      output << %{ #{key}="#{textconv(val)}"}
    end
    cols_in_row_tag.each do |key|
       # TODO: use textconv ? " substitution?
      output << %{ #{key}="#{dbrow[key]}"}
    end
    output << ">\n"

    cols_as_tag.each do |key|
      output << "  <#{key}>" + textconv(dbrow[key]) + "</#{key}>\n" 
    end
    output << "</#{rowtag}>\n"
  end


 
  def XMLFormatter.table(rows, roottag = "rows", rowtag = "row", output=STDOUT)
    output << '<?xml version="1.0" encoding="UTF-8" ?>'
    output << "\n<#{roottag}>\n"
    rows.each do |row|
      row(row, rowtag, output)
    end
    output << "</#{roottag}>\n"
  end

  class << self
    private
    # from xmloracle.rb 
    def textconv(str)
      str = str.to_s.gsub('&', "&#38;")
      str = str.gsub('\'', "&#39;")
      str = str.gsub('"', "&#34;")
      str = str.gsub('<', "&#60;")
      str.gsub('>', "&#62;")
    end
  end # class self

end # module XMLFormatter


module TableFormatter

  # TODO: add a nr-column where the number of the column is shown
  def TableFormatter.ascii(header, rows, 
    header_orient=:left, rows_orient=:left, 
    indent=2, cellspace=1, pagebreak_after=nil,
    output=STDOUT)

    header_orient ||= :left
    rows_orient   ||= :left
    indent        ||= 2
    cellspace     ||= 1

    # pagebreak_after n-rows (without counting header or split-lines)
    # yield block with output as param after each pagebreak (not at the end)

    col_lengths = (0...(header.size)).collect do |colnr|
      [
      (0...rows.size).collect { |rownr|
        value = rows[rownr][colnr]
        (value.nil? ? "NULL" : value).to_s.size
      }.max,
      header[colnr].size
      ].max
    end

    indent = " " * indent

    split_line = indent + "+"
    col_lengths.each {|col| split_line << "-" * (col+cellspace*2) + "+" }

    cellspace = " " * cellspace

    output_row = proc {|row, orient|
      output << indent + "|"
      row.each_with_index {|c,i|
        output << cellspace
        str = (c.nil? ? "NULL" : c).to_s
        output << case orient
        when :left then   str.ljust(col_lengths[i])
        when :right then  str.rjust(col_lengths[i])
        when :center then str.center(col_lengths[i])
        end 
        output << cellspace
        output << "|"
      }
      output << "\n" 
    } 

    rownr = 0
 
    loop do 
      output << split_line + "\n"
      output_row.call(header, header_orient)
      output << split_line + "\n"
      if pagebreak_after.nil?
        rows.each {|ar| output_row.call(ar, rows_orient)}
        output << split_line + "\n"
        break
      end      

      rows[rownr,pagebreak_after].each {|ar| output_row.call(ar, rows_orient)}
      output << split_line + "\n"

      rownr += pagebreak_after

      break if rownr >= rows.size
      
      yield output if block_given?
    end
    
  end



end # module TableFormatter

end # module Utils
end # module DBI


