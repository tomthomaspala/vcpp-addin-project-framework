// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__844C9AD7_A01E_49D3_B9C7_8896BDEEBCBD__INCLUDED_)
#define AFX_MAINFRM_H__844C9AD7_A01E_49D3_B9C7_8896BDEEBCBD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000



class CMainFrame : public CFrameWnd
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)
	CArray<ACCEL,ACCEL> m_AcceleratorArray;
// Attributes
public:
	
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	//}}AFX_VIRTUAL

// Implementation
public:
	void SetStatusText(CString strStatus);
	BOOL RemoveCommands(UINT iCommand);
	BOOL LoadAditionalAccelerators();
	BOOL AddAccelerator(UINT iCommandID, CString strAccel);
	CMenu* FindMenu(CMenu *pMenu, CString strMenuString);
	BOOL LoadAllAddinCommands();
	BOOL GetToolText(HWND toolHandle, UINT nID, CString& strTipText, CString& strMessage );
	bool PFMergeAccelerator(HACCEL& hDestination, HACCEL hToMerge);
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;
	CArray<CToolBar*,CToolBar*> m_pAddinToolbarArray;
// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnAddinAddinsettings();
	afx_msg void OnClose();
	afx_msg void OnAddinMenuItems(UINT iCommandID);
	afx_msg void OnUpdateAddinMenuItems(CCmdUI* pCmdUI);
	afx_msg void OnUpdateMenuItems(CCmdUI* pCmdUI);
	afx_msg BOOL OnToolTipText(UINT nID, NMHDR* pNMHDR, LRESULT* pResult);

	afx_msg void OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu);
	afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__844C9AD7_A01E_49D3_B9C7_8896BDEEBCBD__INCLUDED_)
