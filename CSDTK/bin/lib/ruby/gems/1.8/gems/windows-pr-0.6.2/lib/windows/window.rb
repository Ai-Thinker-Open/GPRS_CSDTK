require 'Win32API'

module Windows
   module Window
      # ShowWindow() constants
      SW_HIDE             = 0
      SW_SHOWNORMAL       = 1
      SW_NORMAL           = 1
      SW_SHOWMINIMIZED    = 2
      SW_SHOWMAXIMIZED    = 3
      SW_MAXIMIZE         = 3
      SW_SHOWNOACTIVATE   = 4
      SW_SHOW             = 5
      SW_MINIMIZE         = 6
      SW_SHOWMINNOACTIVE  = 7
      SW_SHOWNA           = 8
      SW_RESTORE          = 9
      SW_SHOWDEFAULT      = 10
      SW_FORCEMINIMIZE    = 11
      SW_MAX              = 11
      
      GetClientRect       = Win32API.new('user32', 'GetClientRect', 'LP', 'I')
      GetForegroundWindow = Win32API.new('user32', 'GetForegroundWindow', 'V', 'L')
      GetWindowRect       = Win32API.new('user32', 'GetWindowRect', 'LP', 'I')
      
      def GetClientRect(hwnd, rect)
         GetClientRect.call(hwnd, rect) != 0
      end
      
      def GetForegroundWindow
         GetForegroundWindow.call
      end
      
      def GetWindowRect(hwnd, rect)
         GetWindowRect.call(hwnd, rect) != 0
      end
   end
end