SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\Program Files\Common Files\Siemens\Automation\Simatic OAM\bin;C:\Program Files (x86)\Beckhoff\TwinCAT\Common64\;C:\Program Files (x86)\Beckhoff\TwinCAT\Common32\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\dotnet\;C:\ProgramData\Beckhoff\TcPkg\;C:\Users\kacper.kapusniak\AppData\Local\Microsoft\WindowsApps;C:\Users\kacper.kapusniak\AppData\Local\Programs\Git\cmd;C:\Users\kacper.kapusniak\AppData\Local\Microsoft\WindowsApps;C:\Users\kacper.kapusniak\AppData\Local\Programs\Git\cmd;C:\Program Files (x86)\BRAutomation\AS6\bin-en
export AS_BUILD_MODE := Build
export AS_VERSION := 6.5.1.7
export AS_WORKINGVERSION := 6.5
export AS_COMPANY_NAME :=  
export AS_USER_NAME := kacper.kapusniak
export AS_PATH := C:/Program Files (x86)/BRAutomation/AS6
export AS_BIN_PATH := C:/Program Files (x86)/BRAutomation/AS6/bin-en
export AS_PROJECT_PATH := C:/Praktyki/Smart_home/smart_home
export AS_PROJECT_NAME := smart_home
export AS_SYSTEM_PATH := C:/Program\ Files\ (x86)/BRAutomation/AS6/AS/System
export AS_VC_PATH := C:/Program\ Files\ (x86)/BRAutomation/AS6/AS/VC
export AS_TEMP_PATH := C:/Praktyki/Smart_home/smart_home/Temp
export AS_CONFIGURATION := Config1
export AS_BINARIES_PATH := C:/Praktyki/Smart_home/smart_home/Binaries
export AS_GNU_INST_PATH := C:/Program\ Files\ \(x86\)/BRAutomation/AS6/AS/GnuInst/V11.3.0
export AS_GNU_BIN_PATH := C:/Program\ Files\ \(x86\)/BRAutomation/AS6/AS/GnuInst/V11.3.0/6.3/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/Program Files (x86)/BRAutomation/AS6/AS/GnuInst/V11.3.0
export AS_GNU_BIN_PATH_SUB_MAKE := C:/Program Files (x86)/BRAutomation/AS6/AS/GnuInst/V11.3.0/6.3/bin
export AS_INSTALL_PATH := C:/Program\ Files\ \(x86\)/BRAutomation/AS6
export WIN32_AS_PATH := "C:\Program Files (x86)\BRAutomation\AS6"
export WIN32_AS_BIN_PATH := "C:\Program Files (x86)\BRAutomation\AS6\bin-en"
export WIN32_AS_PROJECT_PATH := "C:\Praktyki\Smart_home\smart_home"
export WIN32_AS_SYSTEM_PATH := "C:\Program Files (x86)\BRAutomation\AS6\AS\System"
export WIN32_AS_VC_PATH := "C:\Program Files (x86)\BRAutomation\AS6\AS\VC"
export WIN32_AS_TEMP_PATH := "C:\Praktyki\Smart_home\smart_home\Temp"
export WIN32_AS_BINARIES_PATH := "C:\Praktyki\Smart_home\smart_home\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\Program Files (x86)\BRAutomation\AS6\AS\GnuInst\V11.3.0"
export WIN32_AS_GNU_BIN_PATH := "C:\Program Files (x86)\BRAutomation\AS6\AS\GnuInst\V11.3.0\bin"
export WIN32_AS_INSTALL_PATH := "C:\Program Files (x86)\BRAutomation\AS6"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/smart_home.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'Build'   

