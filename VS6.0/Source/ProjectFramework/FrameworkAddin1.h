// FrameworkAddin1.h : Declaration of the CFrameworkAddin1

#ifndef __FRAMEWORKADDIN1_H_
#define __FRAMEWORKADDIN1_H_

#include "resource.h"       // main symbols
#include <atlctl.h>


/////////////////////////////////////////////////////////////////////////////
// CFrameworkAddin1
class ATL_NO_VTABLE CFrameworkAddin1 : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IFrameworkAddin1, &IID_IFrameworkAddin1, &LIBID_ProjectFrameworkLib>,
	public CComControl<CFrameworkAddin1>,
	public IPersistStreamInitImpl<CFrameworkAddin1>,
	public IOleControlImpl<CFrameworkAddin1>,
	public IOleObjectImpl<CFrameworkAddin1>,
	public IOleInPlaceActiveObjectImpl<CFrameworkAddin1>,
	public IViewObjectExImpl<CFrameworkAddin1>,
	public IOleInPlaceObjectWindowlessImpl<CFrameworkAddin1>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CFrameworkAddin1>,
	public IPersistStorageImpl<CFrameworkAddin1>,
	public ISpecifyPropertyPagesImpl<CFrameworkAddin1>,
	public IQuickActivateImpl<CFrameworkAddin1>,
	public IDataObjectImpl<CFrameworkAddin1>,
	public IProvideClassInfo2Impl<&CLSID_FrameworkAddin1, &DIID__IFrameworkAddin1Events, &LIBID_ProjectFrameworkLib>,
	public IPropertyNotifySinkCP<CFrameworkAddin1>,
	public CComCoClass<CFrameworkAddin1, &CLSID_FrameworkAddin1>
{
public:
	CFrameworkAddin1()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FRAMEWORKADDIN1)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFrameworkAddin1)
	COM_INTERFACE_ENTRY(IFrameworkAddin1)
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
END_COM_MAP()

BEGIN_PROP_MAP(CFrameworkAddin1)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(CFrameworkAddin1)
	CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(CFrameworkAddin1)
	CHAIN_MSG_MAP(CComControl<CFrameworkAddin1>)
	DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);



// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		static const IID* arr[] = 
		{
			&IID_IFrameworkAddin1,
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

// IFrameworkAddin1
public:

	HRESULT OnDraw(ATL_DRAWINFO& di)
	{
		RECT& rc = *(RECT*)di.prcBounds;
		Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);

		SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
		LPCTSTR pszText = _T("ATL 3.0 : FrameworkAddin1");
		TextOut(di.hdcDraw, 
			(rc.left + rc.right) / 2, 
			(rc.top + rc.bottom) / 2, 
			pszText, 
			lstrlen(pszText));

		return S_OK;
	}
};

#endif //__FRAMEWORKADDIN1_H_
