require "rubygems"

spec = Gem::Specification.new do |gem|
   gem.name        = "win32-file-stat"
   gem.version     = "1.2.3"
   gem.author      = "Daniel J. Berger"
   gem.email       = "djberg96@gmail.com"
   gem.homepage    = "http://www.rubyforge.org/projects/win32utils"
   gem.platform    = Gem::Platform::RUBY
   gem.summary     = "A File::Stat class tailored to MS Windows"
   gem.description = "A File::Stat class tailored to MS Windows"
   gem.test_file   = "test/tc_file_stat.rb"
   gem.has_rdoc    = true
   gem.files = Dir['lib/win32/file/*.rb'] + Dir['[A-Z]*']  + Dir['test/*']
   gem.files.reject! { |fn| fn.include? "CVS" }
   gem.require_path = "lib"
   gem.extra_rdoc_files = ["README", "CHANGES"]
   gem.add_dependency("windows-pr", ">= 0.4.0")
end

if $0 == __FILE__
   Gem.manage_gems
   Gem::Builder.new(spec).build
end