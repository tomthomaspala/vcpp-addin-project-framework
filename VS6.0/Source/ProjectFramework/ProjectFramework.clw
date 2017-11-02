; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CProjectFrameworkView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ProjectFramework.h"
LastPage=0

ClassCount=6
Class1=CProjectFrameworkApp
Class2=CProjectFrameworkDoc
Class3=CProjectFrameworkView
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CAddinSettingsDialog
Resource3=IDR_TOOLBAR1
Resource4=IDD_DIALOG_ADDIN_SETTINGS

[CLS:CProjectFrameworkApp]
Type=0
HeaderFile=ProjectFramework.h
ImplementationFile=ProjectFramework.cpp
Filter=N
LastObject=CProjectFrameworkApp

[CLS:CProjectFrameworkDoc]
Type=0
HeaderFile=ProjectFrameworkDoc.h
ImplementationFile=ProjectFrameworkDoc.cpp
Filter=N

[CLS:CProjectFrameworkView]
Type=0
HeaderFile=ProjectFrameworkView.h
ImplementationFile=ProjectFrameworkView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CProjectFrameworkView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=ProjectFramework.cpp
ImplementationFile=ProjectFramework.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDOK,button,1342373889
Control4=IDC_STATIC,static,1342308352

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_ADDIN_ADDINSETTINGS
Command17=ID_APP_ABOUT
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_DIALOG_ADDIN_SETTINGS]
Type=1
Class=CAddinSettingsDialog
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_LIST_ADDIN,listbox,1352728915

[CLS:CAddinSettingsDialog]
Type=0
HeaderFile=AddinSettingsDialog.h
ImplementationFile=AddinSettingsDialog.cpp
BaseClass=CDialog
Filter=D
LastObject=CAddinSettingsDialog
VirtualFilter=dWC

[TB:IDR_TOOLBAR1]
Type=1
Class=?
Command1=ID_BUTTON32772
Command2=ID_BUTTON32773
Command3=ID_BUTTON32774
Command4=ID_BUTTON32775
Command5=ID_BUTTON32776
Command6=ID_BUTTON32777
Command7=ID_BUTTON32778
Command8=ID_BUTTON32779
Command9=ID_BUTTON32780
Command10=ID_BUTTON32781
Command11=ID_BUTTON32782
Command12=ID_BUTTON32783
Command13=ID_BUTTON32784
Command14=ID_BUTTON32785
Command15=ID_BUTTON32786
Command16=ID_BUTTON32787
CommandCount=16

