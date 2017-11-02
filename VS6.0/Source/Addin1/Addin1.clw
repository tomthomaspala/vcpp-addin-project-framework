; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
ResourceCount=2
ClassCount=2
Class1=CAddin1App
LastClass=CListSalesDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "resource.h"
ODLFile=Addin1.idl
LastPage=0
Resource1=IDR_TOOLBAR_ADDIN1
Class2=CListSalesDlg
Resource2=IDD_DIALOG_SALES


[CLS:CAddin1App]
Type=0
HeaderFile=Addin1.h
ImplementationFile=Addin1.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC
LastObject=CAddin1App

[TB:IDR_TOOLBAR_ADDIN1]
Type=1
Class=?
Command1=ID_BUTTON32768
Command2=ID_BUTTON32769
Command3=ID_BUTTON32770
CommandCount=3

[DLG:IDD_DIALOG_SALES]
Type=1
Class=CListSalesDlg
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT_HEADING_1,edit,1350631552
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT_HEADING_2,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT_HEADING_3,edit,1350631552

[CLS:CListSalesDlg]
Type=0
HeaderFile=ListSalesDlg.h
ImplementationFile=ListSalesDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT_HEADING_3
VirtualFilter=dWC

