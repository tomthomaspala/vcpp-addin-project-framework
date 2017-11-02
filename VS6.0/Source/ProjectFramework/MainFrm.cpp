
/* ----------------------------------- File Header -------------------------------------------*
	File				:	MainFrm.cpp
	Project Code		:	
	Author	    		:	Tom Thomas
	Created On	    	:	11/17/2004 5:03:22 PM
	Last Modified	   	:	11/17/2004 5:03:22 PM
----------------------------------------------------------------------------------------------*
	Type				:	C++ Source File
	Description			:   
	Developer's Note	:	Error Handling is not done prefectly. 
							Code is not production level. No code Optimization done.
	Bugs				:	
	See Also			:	
	Revision History	:	
	Traceability        :	
	Necessary Files		:	
---------------------------------------------------------------------------------------------*/

// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "ProjectFramework.h"

#include "MainFrm.h"
#include "AddinSettingsDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_ADDIN_ADDINSETTINGS, OnAddinAddinsettings)
	ON_WM_CLOSE()
	ON_WM_MENUSELECT()
	ON_WM_INITMENUPOPUP()
	//}}AFX_MSG_MAP
	ON_COMMAND_RANGE(PF_ADDIN_CMD_MIN_MSG_ID, PF_ADDIN_CMD_MAX_MSG_ID, OnAddinMenuItems)
	ON_UPDATE_COMMAND_UI_RANGE(PF_ADDIN_CMD_MIN_MSG_ID, PF_ADDIN_CMD_MAX_MSG_ID, OnUpdateAddinMenuItems)
	ON_UPDATE_COMMAND_UI_RANGE(ID_FILE_NEW, ID_APP_ABOUT, OnUpdateMenuItems)

	ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTW, PF_MIN_MSG, PF_MAX_MSG, OnToolTipText)
	ON_NOTIFY_EX_RANGE(TTN_NEEDTEXTA, PF_MIN_MSG, PF_MAX_MSG, OnToolTipText)
	
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
	for(int i=0;i<m_pAddinToolbarArray.GetSize();i++ )
	{
		delete m_pAddinToolbarArray[i];
	}
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	
	//Load all addins
	if(CProjectFrameworkApp::m_AddinManager.LoadAddinDefaultSettings())
	{
		if(CProjectFrameworkApp::m_AddinManager.GetLoadAllAddinStatus())
		{
			CProjectFrameworkApp::m_AddinManager.LoadAllAddins();	
		}
	}
	LoadAllAddinCommands();


	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable


	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);
	//Remove File new and Open Commands
	RemoveCommands(ID_FILE_NEW);
	RemoveCommands(ID_FILE_OPEN);
	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	
	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnAddinAddinsettings() 
{
	CAddinSettingsDialog AddinSettingsDialog;
	if(AddinSettingsDialog.DoModal()==IDOK)
	{

	}
	
}

void CMainFrame::OnClose() 
{
	CProjectFrameworkApp::m_AddinManager.UnloadAllAddins();  
	CFrameWnd::OnClose();
}

/*-------------------------------------------- Function Header ---------------------------------------------*
	Function Name	  : CMainFrame::LoadAllAddinCommands
	Description	      : To load all addin function commands
					   	
	Return Type	      : BOOL 
	Warning           :
	Working			  : Get the Addin info
					  :	Get the toolbar count
					  : Set the toolbar count
					  : Get the Main Menu name
					  : If the main menu name is there iterate through the sub menu nmes
					  : Else create the main menu
					  : If the sub menu is not there create the sub menu with popup enabled
					  : Create the leaf menu
					  : Set the command ID for the menu
					  : If toolbar index is not -1 then set the command 
					  : ID for this toolbar button

					  
------------------------------------------------------------------------------------------------------------*/


BOOL CMainFrame::LoadAllAddinCommands()
{

	UINT iCommandID= WM_USER+1000;

	int iAddinCount=CProjectFrameworkApp::m_AddinManager.GetAddinCount();

	for(int i=0;i<iAddinCount;i++)
	{
		//Get the Addin info
		CAddinInfo AddinInfo=CProjectFrameworkApp::m_AddinManager.GetAddinInfo(i);
		CToolBar* pAddinToolbar= new CToolBar();
		pAddinToolbar->CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP 
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC);

		//Get the toolbar count
		int iToolbarButtonCount=AddinInfo.m_lToolbarButtonCount; 
		//Create an integer array for storing the toolbar Button Commands
		int *piTollbarCommandsID= new int[iToolbarButtonCount];
		
		//Get the main menu
		CMenu* pMainMenu =GetMenu();
		CMenu *pCraetedMenu=pMainMenu;
		int iMenuCount=pMainMenu->GetMenuItemCount();
		if (pMainMenu != NULL && iMenuCount > 0)
		{
			pCraetedMenu=pMainMenu;
			//Create all the leaf menus
			for(int j=0;j<AddinInfo.m_AddinCommadInfoArray.GetSize();j++)
			{
				iMenuCount=pMainMenu->GetMenuItemCount();
				CStringArray MenuArray;
				MenuArray.Copy(AddinInfo.m_AddinCommadInfoArray[j].m_MenuStringsArray);
				//Iterate through all MenuArray to see the given menu and submenu is there
				//Check the menu is already there and is in index 0

				CMenu *pSubMenu=FindMenu(pMainMenu,MenuArray[0]);
				CMenu *pMainSubMenu=NULL; 
				//If the menu is not there create a submenu and appened this menu
				if(!pSubMenu)
				{
					
					//Insert this menu to the main menu
					pMainMenu->InsertMenu(iMenuCount-1,MF_BYPOSITION | MF_POPUP,(UINT)CreatePopupMenu(),MenuArray[0]);
					pSubMenu=FindMenu(pMainMenu,MenuArray[0]);
										
									
				}
				//
				pMainSubMenu=pSubMenu;
				for(int k=1;k < MenuArray.GetSize();k++)
				{
					pSubMenu=FindMenu(pMainSubMenu,MenuArray[k]);
					if(!pSubMenu)
					{
						//Insert this menu to the main menu
						if(pMainSubMenu->InsertMenu(pMainSubMenu->GetMenuItemCount()-1,MF_BYPOSITION | MF_POPUP,(UINT)CreatePopupMenu(),MenuArray[k]))
						{
							pSubMenu=FindMenu(pMainSubMenu,MenuArray[k]);
						}
						
										
					}
					if(pSubMenu)
					{
						pMainSubMenu=pSubMenu;
					}
					
				}
				//Check if separator is there
				if(AddinInfo.m_AddinCommadInfoArray[j].m_iSeparator >0)
				{
					pMainSubMenu->AppendMenu(MF_SEPARATOR,0,"");
					
				}
				//Append the leaf menu with a command ID
				CString strLeafMenu=AddinInfo.m_AddinCommadInfoArray[j].m_strMenuString;
				
				//Append the shortcut key if any
				if(AddinInfo.m_AddinCommadInfoArray[j].m_strShortCutKey!="")
				{
					strLeafMenu+="\t";
					strLeafMenu+=AddinInfo.m_AddinCommadInfoArray[j].m_strShortCutKey;
					
				}
				pMainSubMenu->AppendMenu(MF_STRING,iCommandID,strLeafMenu);
				//Add the accel key too
				if(AddinInfo.m_AddinCommadInfoArray[j].m_strShortCutKey!="")
				{
					AddAccelerator(iCommandID,AddinInfo.m_AddinCommadInfoArray[j].m_strShortCutKey);
				}
				//Set the Command ID of the menu too
				AddinInfo.m_AddinCommadInfoArray[j].m_iCommandID=iCommandID;
				CProjectFrameworkApp::m_AddinManager.SetAddinInfo(i,AddinInfo);
				if(AddinInfo.m_AddinCommadInfoArray[j].m_iToolbarIndex!=-1)
				{
					piTollbarCommandsID[AddinInfo.m_AddinCommadInfoArray[j].m_iToolbarIndex]=iCommandID;
					iCommandID++;//Increment the command ID So that the command is unique
					
				}
				
			}
						
		
		}

		//: Get the Main Menu name
		//: If the main menu name is there iterate through the sub menu nmes
		//: Else create the main menu
		//: If the sub menu is not there create the sub menu with popup enabled
		//: Create the leaf menu
		//: Set the command ID for the menu

		
		HBITMAP AddinBitMap=LoadBitmap((HINSTANCE)AddinInfo.m_lInstanceHandle,MAKEINTRESOURCE(AddinInfo.m_lToobarRes));
		pAddinToolbar->LoadToolBar(IDR_TOOLBAR1);
		pAddinToolbar->SetButtons((const unsigned int *)piTollbarCommandsID,iToolbarButtonCount); 
		pAddinToolbar->SetBitmap(AddinBitMap);

		pAddinToolbar->EnableDocking(CBRS_ALIGN_ANY);
		EnableDocking(CBRS_ALIGN_ANY);
		DockControlBar(pAddinToolbar);
		m_pAddinToolbarArray.Add(pAddinToolbar); 
		delete [] piTollbarCommandsID;

	}

	return TRUE;
}

BOOL CMainFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo) 
{
	
	return CFrameWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}

BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CFrameWnd::OnCommand(wParam, lParam);
}

CMenu* CMainFrame::FindMenu(CMenu *pMenu, CString strMenuString)
{
	int iMenuCount=pMenu->GetMenuItemCount(); 
	CMenu* pSubMenu=NULL;
	for(int iMenuIndex=0;iMenuIndex<iMenuCount;iMenuIndex++)
	{
		CString strSubMenuString;
		int iPos=pMenu->GetMenuString(iMenuIndex,strSubMenuString,MF_BYPOSITION);
		if(strSubMenuString==strMenuString)
		{
			pSubMenu=pMenu->GetSubMenu(iMenuIndex); 
			return pSubMenu;
		}
	}
	return pSubMenu;
}


/*-------------------------------------------- Function Header ---------------------------------------------*
	Function Name	  : CMainFrame::OnAddinMenuItems
	Description	      : Here we can invoke all the functionss of all addins
	Return Type	      : void 
	Warning           : 
  Argument          : UINT nID
------------------------------------------------------------------------------------------------------------*/

void CMainFrame::OnAddinMenuItems(UINT nID)
{
	CProjectFrameworkApp::m_AddinManager.InvokeAddinMenuItem(nID);

}


/*-------------------------------------------- Function Header ---------------------------------------------*
	Function Name	  : CMainFrame::OnUpdateAddinMenuItems
	Description	      : Here we can enable/disable all the menus and toolbars
						of all addins depending on the business logic
	Return Type	      : void 
	Warning           : 
  Argument          : CCmdUI* pCmdUI
------------------------------------------------------------------------------------------------------------*/

void CMainFrame::OnUpdateAddinMenuItems(CCmdUI* pCmdUI)
{
	const CAddinInfo& AddinInfo=CProjectFrameworkApp::m_AddinManager.GetAddinInformation(pCmdUI->m_nID);
	pCmdUI->Enable(AddinInfo.m_bLoadAddin); 
	
}

void CMainFrame::OnUpdateMenuItems(CCmdUI* pCmdUI)
{
	switch (pCmdUI->m_nID)
	{
		case ID_FILE_NEW: 
		case ID_FILE_OPEN:
			pCmdUI->Enable(FALSE); 
			break;
		default:
			pCmdUI->Enable(TRUE); 
			break;

	}
	
}
/*-------------------------------------------- Function Header ---------------------------------------------*
	Function Name	  : CMainFrame::OnToolTipText
	Description	      : 
	Return Type	      : BOOL 
	Warning           : 
  Argument          : UINT nID
  Argument          : NMHDR* pNMHDR
  Argument          : LRESULT* pResult
------------------------------------------------------------------------------------------------------------*/

BOOL CMainFrame::OnToolTipText(UINT nID, NMHDR* pNMHDR, LRESULT* pResult)
{

	ASSERT(pNMHDR->code == TTN_NEEDTEXTA || pNMHDR->code == TTN_NEEDTEXTW);

	TOOLTIPTEXTA* pTTTA = (TOOLTIPTEXTA*)pNMHDR;
	TOOLTIPTEXTW* pTTTW = (TOOLTIPTEXTW*)pNMHDR;

	CString strTipText;
	CString strMessage;
	if ( GetToolText(pNMHDR->hwndFrom,  pNMHDR->idFrom, strTipText, strMessage ) )
	{
		//----------------------------------------------------------------
		// We got a text string so lets give it to Windows to display
		// as our custom tool tip.
		//----------------------------------------------------------------
#ifndef _UNICODE
		if (pNMHDR->code == TTN_NEEDTEXTA)
		lstrcpyn(pTTTA->szText, strTipText, sizeof(pTTTA->szText));
		else
		_mbstowcsz(pTTTW->szText, strTipText, sizeof(pTTTW->szText));
#else
		if (pNMHDR->code == TTN_NEEDTEXTA)
		_wcstombsz(pTTTA->szText, strTipText, sizeof(pTTTA->szText));
		else
		lstrcpyn(pTTTW->szText, strTipText, sizeof(pTTTW->szText));


		//-----------------------------------------------------------------
		// This sets the status bar message to our custom message string.
		//-----------------------------------------------------------------
#endif
		
		SetMessageText( strMessage );
		return TRUE;
	}

	//----------------------------------------------------------------
	// We DID NOT get our own string so pass this notification on to
	// to the base class for processing.
	//----------------------------------------------------------------

	return CFrameWnd::OnToolTipText( nID, pNMHDR, pResult );
}

// Replace this routine with whatever is specific to your needs.
// Obviously, you will want to switch on nID.
//--------------------------------------------------------------------------------------------------

BOOL CMainFrame::GetToolText(HWND toolHandle, UINT nID, CString& strTipText, CString& strMessage )
{
	if((nID >=PF_ADDIN_CMD_MIN_MSG_ID) && (nID<=PF_ADDIN_CMD_MAX_MSG_ID))
	{
		strTipText=CProjectFrameworkApp::m_AddinManager.GetAddinCommadInfo(nID).m_strToolTip;
		strMessage=CProjectFrameworkApp::m_AddinManager.GetAddinCommadInfo(nID).m_strHelpString;
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}

void CMainFrame::OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu) 
{
	
	if((nItemID >=PF_ADDIN_CMD_MIN_MSG_ID) && (nItemID<=PF_ADDIN_CMD_MAX_MSG_ID))
	{
		SetMessageText(CProjectFrameworkApp::m_AddinManager.GetAddinCommadInfo(nItemID).m_strHelpString);
	}
	else
	{
		CFrameWnd::OnMenuSelect(nItemID, nFlags, hSysMenu);
	}

}


/*-------------------------------------------- Function Header ---------------------------------------------*
	Function Name	  : PFMergeAccelerator
	Description	      : 
	Return Type	      : bool CMainFrame:: 
	Warning           : 
  Argument          : HACCEL& hDestination
  Argument          : HACCEL hToMerge
------------------------------------------------------------------------------------------------------------*/

bool CMainFrame:: PFMergeAccelerator(HACCEL& hDestination, HACCEL hToMerge)
{
	// this function merges the hToMerge accelerator table with that of hDestination
	ASSERT(hToMerge) ;

	int		original_count = 0 ;
	int		add_count ;
	if (hDestination != NULL)
	{
		// we have an existing table
		original_count = CopyAcceleratorTable(hDestination, NULL, 0) ;
 	}
	add_count = CopyAcceleratorTable(hToMerge, NULL, 0) ;
	if (add_count > 0)
	{
		ACCEL	*pElements = new ACCEL[original_count + add_count] ;
		// copy in the existing data if it exists
		if (hDestination != NULL)
			CopyAcceleratorTable(hDestination, pElements, original_count) ;
		// now add in the merge accelerator
		CopyAcceleratorTable(hToMerge, &pElements[original_count], add_count) ;
		HACCEL hNew = CreateAcceleratorTable(pElements, original_count + add_count) ;
		DestroyAcceleratorTable(hDestination) ;			// because it gets replaced
		hDestination = hNew ;
		delete []pElements ;
		return true ;
	}
	return false ;
}


/*-------------------------------------------- Function Header ---------------------------------------------*
	Function Name	  : CMainFrame::AddAccelerator
	Description	      : 
	Return Type	      : BOOL 
	Warning           : 
  Argument          : UINT iCommandID
  Argument          : CString strAccel
------------------------------------------------------------------------------------------------------------*/

BOOL CMainFrame::AddAccelerator(UINT iCommandID, CString strAccel)
{
		
	CString strBeforePlus="";
	CString strAfterPlus="";
	CString strShortcut=strAccel;
	for(int i=0;i<strShortcut.GetLength();i++)
	{
		if(strShortcut[i]=='+')
		{
			strBeforePlus=strAfterPlus;
			strAfterPlus="";
		}
		else
		{
			strAfterPlus+=strShortcut[i];
		}
	}
	//Process the Virtual key First
	ACCEL Accel;

	if(strBeforePlus=="Ctrl")
	{
		Accel.fVirt=FCONTROL|FVIRTKEY;
	}
	else if(strBeforePlus=="Alt")
	{
		Accel.fVirt=FALT|FVIRTKEY;		
	}
	else if(strBeforePlus=="Shift")
	{
		Accel.fVirt=FSHIFT|FVIRTKEY;	
	}
	if(strAfterPlus.GetLength()>0)
	{
		Accel.key=strAfterPlus.GetAt(0);
	}
	Accel.cmd=iCommandID;
	m_AcceleratorArray.Add(Accel);

	return TRUE;

}


/*-------------------------------------------- Function Header ---------------------------------------------*
	Function Name	  : CMainFrame::LoadAditionalAccelerators
	Description	      : 
	Return Type	      : BOOL 
	Warning           : 
------------------------------------------------------------------------------------------------------------*/

BOOL CMainFrame::LoadAditionalAccelerators()
{
	if(m_AcceleratorArray.GetSize()>0)
	{
		ACCEL* pAccelArray= new ACCEL[m_AcceleratorArray.GetSize()]; 
		for(int i=0;i<m_AcceleratorArray.GetSize();i++)
		{
			pAccelArray[i]=m_AcceleratorArray[i];
		}
		HACCEL AcclAppend=CreateAcceleratorTable(pAccelArray,m_AcceleratorArray.GetSize());
		PFMergeAccelerator(m_hAccelTable,AcclAppend);
		delete [] pAccelArray;
	}
	return TRUE;
}

void CMainFrame::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu) 
{
	
	CFrameWnd::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);
	 
	// TODO: Add your message handler code here
	
}

BOOL CMainFrame::RemoveCommands(UINT iCommand)
{
	try
	{
		//Remove the Menu	
		CMenu* pParentMenu=GetMenu();
		for(UINT i=0;i<pParentMenu->GetMenuItemCount();i++)
		{
			CMenu* pSubMenu=pParentMenu->GetSubMenu(i);
			pSubMenu->RemoveMenu(iCommand,MF_BYCOMMAND);

		}
		//Remove the toolbar
		m_wndToolBar.GetToolBarCtrl().SetState(iCommand,TBSTATE_HIDDEN); 

		for(int j=0;j<m_pAddinToolbarArray.GetSize();j++)
		{
			m_pAddinToolbarArray[j]->GetToolBarCtrl().SetState(iCommand,TBSTATE_HIDDEN); 
		}
		//Remove the accelerator associated with that
		
		return TRUE;
	}
	catch(...)
	{
		return FALSE;
	}
}

void CMainFrame::SetStatusText(CString strStatus)
{
	m_wndStatusBar.SetPaneText(0,strStatus);
}
