
/* ----------------------------------- File Header -------------------------------------------*
	File				:	ProjectFrameworkExt.h
	Project Code		:	
	Author	    		:	Swapna K V, NeST India (P) Ltd
	Created On	    	:	10/28/2004 6:11:30 PM
	Last Modified	   	:	10/28/2004 6:11:30 PM
----------------------------------------------------------------------------------------------*
	Type				:	Header File
	Description			:   
	Developer's Note	:	
	Bugs				:	
	See Also			:	
	Revision History	:	
	Traceability        :	
	Necessary Files		:	
---------------------------------------------------------------------------------------------*/



// ProjectFrameworkExt.h : Declaration of the CProjectFramework

#ifndef __PROJECTFRAMEWORK_H_
#define __PROJECTFRAMEWORK_H_

#include "resource.h"       // main symbols
#include "ProjectFrameworkCP.h"

#import "msxml.dll" named_guids raw_interfaces_only
using namespace MSXML;


/////////////////////////////////////////////////////////////////////////////
// CProjectFramework
class ATL_NO_VTABLE CProjectFramework : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CProjectFramework, &CLSID_ProjectFramework>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CProjectFramework>,
	public IDispatchImpl<IProjectFramework, &IID_IProjectFramework, &LIBID_ProjectFrameworkLib>,
	public CProxy_IProjectFrameworkEvents< CProjectFramework >
{
public:
	CProjectFramework()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PROJECTFRAMEWORK1)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CProjectFramework)
	COM_INTERFACE_ENTRY(IProjectFramework)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
END_COM_MAP()
BEGIN_CONNECTION_POINT_MAP(CProjectFramework)
CONNECTION_POINT_ENTRY(DIID__IProjectFrameworkEvents)
END_CONNECTION_POINT_MAP()


// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IProjectFramework
public:
	STDMETHOD(SendStatus)(BSTR strStatus);
	STDMETHOD(SetViewHeading)(BSTR strHeading1, BSTR strHeading2,BSTR strHeading3);
	BOOL GetAllCommandsInfo(CAddinInfo& AddinInfo, IXMLDOMNodeList* pXMLDOMNodeList);
	BOOL ParseAndLoadCommandInfo(BSTR strXMLCommand, CAddinInfo& AddinInfo);
	STDMETHOD(SetAddinToolbar)(long lAddinIndex, VARIANT varValue);
	STDMETHOD(get_MainWindow)(/*[out, retval]*/ long *pVal);
	STDMETHOD(LoadAllAdins)(BSTR strAddinLoadingInfo);
	STDMETHOD(SetAddInInfo)(long lSessionID, long lInstanceHandle, BSTR strXMLMenuToolbarIDCmdInfo, long lToobarRes);
};

#endif //__PROJECTFRAMEWORK_H_
