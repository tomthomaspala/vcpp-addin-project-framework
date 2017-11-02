// ProjectFrameworkAddin.cpp : Implementation of CProjectFrameworkApp and DLL registration.

#include "stdafx.h"
#include "ProjectFramework.h"
#include "ProjectFrameworkAddin.h"

/////////////////////////////////////////////////////////////////////////////
//


STDMETHODIMP ProjectFrameworkAddin::Initialize(long lSessionID, IProjectFramework *pApp, VARIANT bFirstTime)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP ProjectFrameworkAddin::Uninitialize(long lSessionID)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState())

	// TODO: Add your implementation code here

	return S_OK;
}
