// FramworkObject2.cpp : Implementation of CFramworkObject2

#include "stdafx.h"
#include "Addin2.h"
#include "FramworkObject2.h"

/////////////////////////////////////////////////////////////////////////////
// CFramworkObject2


STDMETHODIMP CFramworkObject2::Function1()
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())
	CString strMsg="called CFramworkObject2::Function1()";
	m_pProjectFramework->SendStatus(strMsg.AllocSysString());
	CColorDialog ColorDialog;
	ColorDialog.DoModal(); 
	return S_OK;
}
