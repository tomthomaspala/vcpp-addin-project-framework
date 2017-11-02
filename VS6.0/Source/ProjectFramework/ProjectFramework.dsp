# Microsoft Developer Studio Project File - Name="ProjectFramework" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=ProjectFramework - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "ProjectFramework.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ProjectFramework.mak" CFG="ProjectFramework - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ProjectFramework - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "ProjectFramework - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "ProjectFramework - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "ProjectFramework - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "ProjectFramework - Win32 Release"
# Name "ProjectFramework - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AddinManager.cpp
# End Source File
# Begin Source File

SOURCE=.\AddinSettingsDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\FrameworkAddin1.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\ProjectFramework.cpp
# End Source File
# Begin Source File

SOURCE=.\ProjectFramework.idl
# ADD MTL /h "ProjectFramework_i.h" /iid "ProjectFramework_i.c" /Oicf
# End Source File
# Begin Source File

SOURCE=.\ProjectFramework.rc
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkAddin.cpp
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkExt.cpp
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkView.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AddinManager.h
# End Source File
# Begin Source File

SOURCE=.\AddinSettingsDialog.h
# End Source File
# Begin Source File

SOURCE=.\FrameworkAddin1.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\ProjectFramework.h
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkAddin.h
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkCommon.h
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkCP.h
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkDoc.h
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkExt.h
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkView.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\framewor.bmp
# End Source File
# Begin Source File

SOURCE=.\FrameworkAddin1.rgs
# End Source File
# Begin Source File

SOURCE=.\res\projectf.bin
# End Source File
# Begin Source File

SOURCE=.\res\ProjectFramework.ico
# End Source File
# Begin Source File

SOURCE=.\res\ProjectFramework.rc2
# End Source File
# Begin Source File

SOURCE=.\ProjectFramework.rgs
# End Source File
# Begin Source File

SOURCE=.\ProjectFrameworkAddin.rgs
# End Source File
# Begin Source File

SOURCE=.\res\ProjectFrameworkAddin.rgs
# End Source File
# Begin Source File

SOURCE=.\res\ProjectFrameworkDoc.ico
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# Begin Source File

SOURCE=.\res\toolbar1.bmp
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section ProjectFramework : {00040040-8000-0200-0200-200000200000}
# 	1:20:IDR_PROJECTFRAMEWORK:102
# End Section
