// ListSalesDlg.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "ListSalesDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CListSalesDlg dialog


CListSalesDlg::CListSalesDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CListSalesDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CListSalesDlg)
	m_strHeading1 = _T("");
	m_strHeading2 = _T("");
	m_strHeading3 = _T("");
	//}}AFX_DATA_INIT
}


void CListSalesDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CListSalesDlg)
	DDX_Text(pDX, IDC_EDIT_HEADING_1, m_strHeading1);
	DDX_Text(pDX, IDC_EDIT_HEADING_2, m_strHeading2);
	DDX_Text(pDX, IDC_EDIT_HEADING_3, m_strHeading3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CListSalesDlg, CDialog)
	//{{AFX_MSG_MAP(CListSalesDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CListSalesDlg message handlers

void CListSalesDlg::OnOK() 
{
	UpdateData();	
	CDialog::OnOK();
}
