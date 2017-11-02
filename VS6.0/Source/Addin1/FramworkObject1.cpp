// FramworkObject1.cpp : Implementation of CFramworkObject1

#include "stdafx.h"
#include "Addin1.h"
#include "FramworkObject1.h"
#include "ListSalesDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CFramworkObject1


STDMETHODIMP CFramworkObject1::Function2()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	CListSalesDlg ListSalesDlg;
	if(ListSalesDlg.DoModal()==IDOK)
	{
		m_pProjectFramework->SetViewHeading(ListSalesDlg.m_strHeading1.AllocSysString(),ListSalesDlg.m_strHeading2.AllocSysString()
			,ListSalesDlg.m_strHeading3.AllocSysString());
	}
	return S_OK;
}

STDMETHODIMP CFramworkObject1::Function3()
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

	AfxMessageBox("Inside Sales Report Addin STDMETHODIMP CFramworkObject1::Function3()");
	
	return S_OK;
}
