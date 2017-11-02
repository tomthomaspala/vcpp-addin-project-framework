// ProjectFrameworkAddin.h: Definition of the ProjectFrameworkAddin class
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROJECTFRAMEWORKADDIN_H__BD88861E_1F48_4C27_903D_A4622C9AFA44__INCLUDED_)
#define AFX_PROJECTFRAMEWORKADDIN_H__BD88861E_1F48_4C27_903D_A4622C9AFA44__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// ProjectFrameworkAddin

class ProjectFrameworkAddin : 
	public IProjectFrameworkAddin,
	public CComObjectRoot,
	public CComCoClass<ProjectFrameworkAddin,&CLSID_ProjectFrameworkAddin>
{
public:
	ProjectFrameworkAddin() {}
BEGIN_COM_MAP(ProjectFrameworkAddin)
	COM_INTERFACE_ENTRY(IProjectFrameworkAddin)
END_COM_MAP()
//DECLARE_NOT_AGGREGATABLE(ProjectFrameworkAddin) 
// Remove the comment from the line above if you don't want your object to 
// support aggregation. 

DECLARE_REGISTRY_RESOURCEID(IDR_ProjectFrameworkAddin)

// IProjectFrameworkAddin
public:
	STDMETHOD(Uninitialize)(long lSessionID);
	STDMETHOD(Initialize)(long lSessionID, IProjectFramework *pApp, VARIANT bFirstTime);
};

#endif // !defined(AFX_PROJECTFRAMEWORKADDIN_H__BD88861E_1F48_4C27_903D_A4622C9AFA44__INCLUDED_)
