// ProjectFramework.h : main header file for the PROJECTFRAMEWORK application
//

#if !defined(AFX_PROJECTFRAMEWORK_H__F8FA0650_58E8_4568_9390_A97B63224BCD__INCLUDED_)
#define AFX_PROJECTFRAMEWORK_H__F8FA0650_58E8_4568_9390_A97B63224BCD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "ProjectFramework_i.h"

/////////////////////////////////////////////////////////////////////////////
// CProjectFrameworkApp:
// See ProjectFramework.cpp for the implementation of this class
//
class CProjectFrameworkView;

class CProjectFrameworkApp : public CWinApp
{
	DECLARE_DYNCREATE(CProjectFrameworkApp)
public:
	

	CProjectFrameworkApp();
	static CAddinManager m_AddinManager;
	static CProjectFrameworkView* m_pView;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProjectFrameworkApp)
	public:
	virtual BOOL InitInstance();
		virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CProjectFrameworkApp)
	afx_msg void OnAppAbout();
	void OnNotifyStatus(LPTSTR strStatus);
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	
	DECLARE_DISPATCH_MAP()

    // Interface Map declaration
    //
    DECLARE_INTERFACE_MAP()

private:
	BOOL m_bATLInited;
private:
	BOOL InitATL();
};




/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROJECTFRAMEWORK_H__F8FA0650_58E8_4568_9390_A97B63224BCD__INCLUDED_)
