#if !defined(AFX_LISTSALESDLG_H__FC885FB6_0E52_42E4_BD85_FAC598394F6E__INCLUDED_)
#define AFX_LISTSALESDLG_H__FC885FB6_0E52_42E4_BD85_FAC598394F6E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ListSalesDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CListSalesDlg dialog

class CListSalesDlg : public CDialog
{
// Construction
public:
	CListSalesDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CListSalesDlg)
	enum { IDD = IDD_DIALOG_SALES };
	CString	m_strHeading1;
	CString	m_strHeading2;
	CString	m_strHeading3;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListSalesDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CListSalesDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISTSALESDLG_H__FC885FB6_0E52_42E4_BD85_FAC598394F6E__INCLUDED_)
