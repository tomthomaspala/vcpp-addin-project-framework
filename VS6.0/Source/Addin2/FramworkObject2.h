// FramworkObject2.h : Declaration of the CFramworkObject2

#ifndef __FRAMWORKOBJECT2_H_
#define __FRAMWORKOBJECT2_H_

#include "resource.h"       // main symbols
#include <atlctl.h>
#include<Atlbase.h>
static const GUID CATID_PROJECT_FRAMEWORK_ADDINS =
{ 0x66ebc8d5, 0xa4d0, 0x48c4, { 0x97, 0x8a, 0x56, 0xd1, 0xb3, 0x5e,0x15, 0x7b } };


#import "..\TLB\ProjectFramework.tlb" raw_interfaces_only, raw_native_types, no_namespace, named_guids 

#include <afxcmn.h>
/////////////////////////////////////////////////////////////////////////////
// CFramworkObject2
class ATL_NO_VTABLE CFramworkObject2 : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IFramworkObject2, &IID_IFramworkObject2, &LIBID_ADDIN2Lib>,
	public CComControl<CFramworkObject2>,
	public IPersistStreamInitImpl<CFramworkObject2>,
	public IOleControlImpl<CFramworkObject2>,
	public IOleObjectImpl<CFramworkObject2>,
	public IOleInPlaceActiveObjectImpl<CFramworkObject2>,
	public IViewObjectExImpl<CFramworkObject2>,
	public IOleInPlaceObjectWindowlessImpl<CFramworkObject2>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CFramworkObject2>,
	public IPersistStorageImpl<CFramworkObject2>,
	public ISpecifyPropertyPagesImpl<CFramworkObject2>,
	public IQuickActivateImpl<CFramworkObject2>,
	public IDataObjectImpl<CFramworkObject2>,
	public IProvideClassInfo2Impl<&CLSID_FramworkObject2, &DIID__IFramworkObject2Events, &LIBID_ADDIN2Lib>,
	public IPropertyNotifySinkCP<CFramworkObject2>,
	public CComCoClass<CFramworkObject2, &CLSID_FramworkObject2>,
	public IProjectFrameworkAddin
{
		IProjectFramework* m_pProjectFramework;
public:
	CFramworkObject2()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FRAMWORKOBJECT2)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFramworkObject2)
	COM_INTERFACE_ENTRY(IFramworkObject2)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY(IQuickActivate)
	COM_INTERFACE_ENTRY(IPersistStorage)
	COM_INTERFACE_ENTRY(IDataObject)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	COM_INTERFACE_ENTRY(IProjectFrameworkAddin)
END_COM_MAP()

BEGIN_PROP_MAP(CFramworkObject2)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CFramworkObject2)
	CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CFramworkObject2)
	CHAIN_MSG_MAP(CComControl<CFramworkObject2>)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

BEGIN_CATEGORY_MAP(CFramworkObject2)
   IMPLEMENTED_CATEGORY(CATID_PROJECT_FRAMEWORK_ADDINS)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		static const IID* arr[] = 
		{
			&IID_IFramworkObject2,
		};
		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

// IViewObjectEx
	DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IFramworkObject2
public:
	STDMETHOD(Function1)();

	HRESULT OnDraw(ATL_DRAWINFO& di)
	{
		RECT& rc = *(RECT*)di.prcBounds;
		Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);

		SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
		LPCTSTR pszText = _T("ATL 3.0 : FramworkObject2");
		TextOut(di.hdcDraw, 
			(rc.left + rc.right) / 2, 
			(rc.top + rc.bottom) / 2, 
			pszText, 
			lstrlen(pszText));

		return S_OK;
	}
// IProjectFrameworkAddin
	STDMETHOD(Initialize)(LONG lSessionID, IProjectFramework * pApp, VARIANT bFirstTime)
	{
		AFX_MANAGE_STATE(AfxGetStaticModuleState())
		CString strXMLCommandSub1,strXMLCommandSub2;
		//You have to berak the string table if you want to accomodate all 
		//words that is there in the XML String
		//Load the XML String
		strXMLCommandSub1.LoadString(IDS_STRING_ADDIN_COMAND_INFO1);
		strXMLCommandSub2.LoadString(IDS_STRING_ADDIN_COMAND_INFO2);
		
		strXMLCommandSub1.Replace("\n",""); //Replace all new line characters
		strXMLCommandSub1.Replace("\t",""); //Replace all tab characters
		
		strXMLCommandSub2.Replace("\n","");
		strXMLCommandSub2.Replace("\t","");
		strXMLCommandSub1+=strXMLCommandSub2;
		HINSTANCE lAppHandle=AfxGetInstanceHandle();
		pApp->SetAddInInfo(lSessionID,(long)lAppHandle,strXMLCommandSub1.AllocSysString(),IDR_TOOLBAR_ADDIN2); 
		m_pProjectFramework=pApp;
		return S_OK;
	}
	STDMETHOD(Uninitialize)(LONG lSessionID)
	{
		return E_NOTIMPL;
	}
};

#endif //__FRAMWORKOBJECT2_H_
