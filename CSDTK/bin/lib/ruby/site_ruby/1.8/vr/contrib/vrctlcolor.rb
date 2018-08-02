###############################
#
# contrib/vrctlcolor.rb
#
# These modules/classes are contributed by Shigitani-san.
# Modified by nyasu <nyasu@osk.3web.ne.jp>
# Distributed at http://vruby.sourceforge.net/index.html
#
###############################

=begin
=== VRCtlColor 
  VisualuRuby �ɂ����āAWM_CTLCOLOR ���������郂�W���[���B

=== Methods
--- addCtlColor(ctl)
  WM_CTLCOLOR ���󂯎�����Ƃ��ɏ�������Ώۂ̃R���g���[����o�^����B
  �Ȃ��A�o�^����Ƃ��� ctl �ɂ� setCtlTextColor, setCtlBkColor �� 2 �̓��ك��\�b�h
  ���ǉ�����܂��B

--- setChildTextColor(ctl, textcolor)
--- setChildBkColor(ctl, bkcolor)
  �o�^�����R���g���[���̃e�L�X�g�F�A�w�i�F��ݒ肷��B�o�^����Ă��Ȃ��R���g
  ���[�����w�肵���ꍇ�͉������Ȃ��B

--- ctl.setCtlTextColor(textcolor)
--- ctl.setCtlBkColor(bkcolor)
  addCtlColor �Œǉ����ꂽ���ك��\�b�h�B�R���g���[���̃e�L�X�g�F�A�w�i�F��ݒ�
  ����B
=end

module WMsg
  WM_CTLCOLORMSGBOX = 0x0132
  WM_CTLCOLOREDIT = 0x0133
  WM_CTLCOLORLISTBOX = 0x0134
  WM_CTLCOLORBTN = 0x0135
  WM_CTLCOLORDLG = 0x0136
  WM_CTLCOLORSCROLLBAR = 0x0137
  WM_CTLCOLORSTATIC = 0x0138
end

module VRCtlColor

  include VRMessageHandler

  def vrctlcolorinit
    @win32_getBkColor = Win32API.new('gdi32.dll', 'GetBkColor', 'I', 'I')
    @win32_setBkColor = Win32API.new('gdi32.dll', 'SetBkColor', 'II', 'I')
    @win32_setTextColor = Win32API.new('gdi32.dll', 'SetTextColor', 'II', 'I')
    @win32_createSolidBrush = Win32API.new('gdi32.dll', 'CreateSolidBrush', 'I', 'I')
    @win32_deleteObject = Win32API.new('gdi32.dll', 'DeleteObject', 'I', 'I')

    @_vrctlcolor = Hash.new
    @_vrctlcolor_brush = Hash.new

    msgs = [ WMsg::WM_CTLCOLORMSGBOX, WMsg::WM_CTLCOLOREDIT, WMsg::WM_CTLCOLORLISTBOX,
             WMsg::WM_CTLCOLORBTN,    WMsg::WM_CTLCOLORDLG,  WMsg::WM_CTLCOLORSCROLLBAR,
             WMsg::WM_CTLCOLORSTATIC ]
    msgs.each {|msg| addHandler(msg, 'ctlcolor', MSGTYPE::ARGINTINT, nil) }
    acceptEvents(msgs)
    addHandler WMsg::WM_DESTROY,"_vrdestroy",MSGTYPE::ARGNONE,nil
    acceptEvents [WMsg::WM_DESTROY]
  end

  def vrinit
    super
    vrctlcolorinit
  end

  def addCtlColor(ctl)
    @_vrctlcolor[ctl.hWnd] = [nil, nil]
    def ctl.setCtlTextColor(textcolor)
      parent.setChildTextColor(self, textcolor)
    end
    def ctl.setCtlBkColor(bkcolor)
      parent.setChildBkColor(self, bkcolor)
    end
  end

  def setChildTextColor(ctl, textcolor)
    return unless @_vrctlcolor.has_key?(ctl.hWnd)
    @_vrctlcolor[ctl.hWnd][0] = textcolor
  end

  def setChildBkColor(ctl, bkcolor)
    return unless @_vrctlcolor.has_key?(ctl.hWnd)
    @_vrctlcolor[ctl.hWnd][1] = bkcolor
  end

  def self_ctlcolor(hDC, hWnd)
    return nil unless @_vrctlcolor.has_key?(hWnd)
    textcolor, bkcolor = @_vrctlcolor[hWnd]
    @win32_setTextColor.call(hDC, textcolor) unless textcolor.nil?
    bkcolor = @win32_getBkColor.call(hDC) if bkcolor.nil?
    @win32_setBkColor.call(hDC, bkcolor)
    SKIP_DEFAULTHANDLER[get_brush(bkcolor)]
  end

  def get_brush(bkcolor)
    unless @_vrctlcolor_brush.has_key?(bkcolor) then
      @_vrctlcolor_brush[bkcolor] = @win32_createSolidBrush.call(bkcolor)
    end
    @_vrctlcolor_brush[bkcolor]
  end

  def self__vrdestroy
    @_vrctlcolor_brush.values.each {|brush| @win32_deleteObject.call(brush) }
  end

end
