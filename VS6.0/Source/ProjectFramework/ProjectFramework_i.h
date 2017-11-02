/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 10 12:10:09 2004
 */
/* Compiler settings for D:\tom\Projects\Addin Project Framework\ProjectFramework\ProjectFramework.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ProjectFramework_i_h__
#define __ProjectFramework_i_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IProjectFramework_FWD_DEFINED__
#define __IProjectFramework_FWD_DEFINED__
typedef interface IProjectFramework IProjectFramework;
#endif 	/* __IProjectFramework_FWD_DEFINED__ */


#ifndef ___IProjectFrameworkEvents_FWD_DEFINED__
#define ___IProjectFrameworkEvents_FWD_DEFINED__
typedef interface _IProjectFrameworkEvents _IProjectFrameworkEvents;
#endif 	/* ___IProjectFrameworkEvents_FWD_DEFINED__ */


#ifndef __IProjectFrameworkAddin_FWD_DEFINED__
#define __IProjectFrameworkAddin_FWD_DEFINED__
typedef interface IProjectFrameworkAddin IProjectFrameworkAddin;
#endif 	/* __IProjectFrameworkAddin_FWD_DEFINED__ */


#ifndef __IFrameworkAddin1_FWD_DEFINED__
#define __IFrameworkAddin1_FWD_DEFINED__
typedef interface IFrameworkAddin1 IFrameworkAddin1;
#endif 	/* __IFrameworkAddin1_FWD_DEFINED__ */


#ifndef __ProjectFramework_FWD_DEFINED__
#define __ProjectFramework_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProjectFramework ProjectFramework;
#else
typedef struct ProjectFramework ProjectFramework;
#endif /* __cplusplus */

#endif 	/* __ProjectFramework_FWD_DEFINED__ */


#ifndef __ProjectFrameworkAddin_FWD_DEFINED__
#define __ProjectFrameworkAddin_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProjectFrameworkAddin ProjectFrameworkAddin;
#else
typedef struct ProjectFrameworkAddin ProjectFrameworkAddin;
#endif /* __cplusplus */

#endif 	/* __ProjectFrameworkAddin_FWD_DEFINED__ */


#ifndef ___IFrameworkAddin1Events_FWD_DEFINED__
#define ___IFrameworkAddin1Events_FWD_DEFINED__
typedef interface _IFrameworkAddin1Events _IFrameworkAddin1Events;
#endif 	/* ___IFrameworkAddin1Events_FWD_DEFINED__ */


#ifndef __FrameworkAddin1_FWD_DEFINED__
#define __FrameworkAddin1_FWD_DEFINED__

#ifdef __cplusplus
typedef class FrameworkAddin1 FrameworkAddin1;
#else
typedef struct FrameworkAddin1 FrameworkAddin1;
#endif /* __cplusplus */

#endif 	/* __FrameworkAddin1_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IProjectFramework_INTERFACE_DEFINED__
#define __IProjectFramework_INTERFACE_DEFINED__

/* interface IProjectFramework */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IProjectFramework;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B185FA1-FFCD-45E5-AAD0-58E396E5C444")
    IProjectFramework : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAddInInfo( 
            long lSessionID,
            long lInstanceHandle,
            BSTR strXMLMenuToolbarIDCmdInfo,
            long lToobarRes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadAllAdins( 
            BSTR strAddinLoadingInfo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MainWindow( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAddinToolbar( 
            long lAddinIndex,
            VARIANT varValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetViewHeading( 
            BSTR strHeading1,
            BSTR strHeading2,
            BSTR strHeading3) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SendStatus( 
            BSTR strStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProjectFrameworkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProjectFramework __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProjectFramework __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProjectFramework __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IProjectFramework __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IProjectFramework __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IProjectFramework __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IProjectFramework __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetAddInInfo )( 
            IProjectFramework __RPC_FAR * This,
            long lSessionID,
            long lInstanceHandle,
            BSTR strXMLMenuToolbarIDCmdInfo,
            long lToobarRes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadAllAdins )( 
            IProjectFramework __RPC_FAR * This,
            BSTR strAddinLoadingInfo);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_MainWindow )( 
            IProjectFramework __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetAddinToolbar )( 
            IProjectFramework __RPC_FAR * This,
            long lAddinIndex,
            VARIANT varValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetViewHeading )( 
            IProjectFramework __RPC_FAR * This,
            BSTR strHeading1,
            BSTR strHeading2,
            BSTR strHeading3);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SendStatus )( 
            IProjectFramework __RPC_FAR * This,
            BSTR strStatus);
        
        END_INTERFACE
    } IProjectFrameworkVtbl;

    interface IProjectFramework
    {
        CONST_VTBL struct IProjectFrameworkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProjectFramework_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProjectFramework_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProjectFramework_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProjectFramework_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IProjectFramework_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IProjectFramework_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IProjectFramework_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IProjectFramework_SetAddInInfo(This,lSessionID,lInstanceHandle,strXMLMenuToolbarIDCmdInfo,lToobarRes)	\
    (This)->lpVtbl -> SetAddInInfo(This,lSessionID,lInstanceHandle,strXMLMenuToolbarIDCmdInfo,lToobarRes)

#define IProjectFramework_LoadAllAdins(This,strAddinLoadingInfo)	\
    (This)->lpVtbl -> LoadAllAdins(This,strAddinLoadingInfo)

#define IProjectFramework_get_MainWindow(This,pVal)	\
    (This)->lpVtbl -> get_MainWindow(This,pVal)

#define IProjectFramework_SetAddinToolbar(This,lAddinIndex,varValue)	\
    (This)->lpVtbl -> SetAddinToolbar(This,lAddinIndex,varValue)

#define IProjectFramework_SetViewHeading(This,strHeading1,strHeading2,strHeading3)	\
    (This)->lpVtbl -> SetViewHeading(This,strHeading1,strHeading2,strHeading3)

#define IProjectFramework_SendStatus(This,strStatus)	\
    (This)->lpVtbl -> SendStatus(This,strStatus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IProjectFramework_SetAddInInfo_Proxy( 
    IProjectFramework __RPC_FAR * This,
    long lSessionID,
    long lInstanceHandle,
    BSTR strXMLMenuToolbarIDCmdInfo,
    long lToobarRes);


void __RPC_STUB IProjectFramework_SetAddInInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IProjectFramework_LoadAllAdins_Proxy( 
    IProjectFramework __RPC_FAR * This,
    BSTR strAddinLoadingInfo);


void __RPC_STUB IProjectFramework_LoadAllAdins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProjectFramework_get_MainWindow_Proxy( 
    IProjectFramework __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IProjectFramework_get_MainWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IProjectFramework_SetAddinToolbar_Proxy( 
    IProjectFramework __RPC_FAR * This,
    long lAddinIndex,
    VARIANT varValue);


void __RPC_STUB IProjectFramework_SetAddinToolbar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IProjectFramework_SetViewHeading_Proxy( 
    IProjectFramework __RPC_FAR * This,
    BSTR strHeading1,
    BSTR strHeading2,
    BSTR strHeading3);


void __RPC_STUB IProjectFramework_SetViewHeading_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IProjectFramework_SendStatus_Proxy( 
    IProjectFramework __RPC_FAR * This,
    BSTR strStatus);


void __RPC_STUB IProjectFramework_SendStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProjectFramework_INTERFACE_DEFINED__ */



#ifndef __ProjectFrameworkLib_LIBRARY_DEFINED__
#define __ProjectFrameworkLib_LIBRARY_DEFINED__

/* library ProjectFrameworkLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ProjectFrameworkLib;

#ifndef ___IProjectFrameworkEvents_DISPINTERFACE_DEFINED__
#define ___IProjectFrameworkEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IProjectFrameworkEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IProjectFrameworkEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("752251EA-F05F-4BE2-BC79-B0044E4C6EC5")
    _IProjectFrameworkEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IProjectFrameworkEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IProjectFrameworkEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IProjectFrameworkEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IProjectFrameworkEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IProjectFrameworkEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IProjectFrameworkEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IProjectFrameworkEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IProjectFrameworkEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IProjectFrameworkEventsVtbl;

    interface _IProjectFrameworkEvents
    {
        CONST_VTBL struct _IProjectFrameworkEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IProjectFrameworkEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IProjectFrameworkEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IProjectFrameworkEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IProjectFrameworkEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IProjectFrameworkEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IProjectFrameworkEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IProjectFrameworkEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IProjectFrameworkEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IProjectFrameworkAddin_INTERFACE_DEFINED__
#define __IProjectFrameworkAddin_INTERFACE_DEFINED__

/* interface IProjectFrameworkAddin */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IProjectFrameworkAddin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DE70B3B4-26A9-4BCD-B642-4084BFFC252A")
    IProjectFrameworkAddin : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            long lSessionID,
            IProjectFramework __RPC_FAR *pApp,
            VARIANT bFirstTime) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Uninitialize( 
            long lSessionID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProjectFrameworkAddinVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProjectFrameworkAddin __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProjectFrameworkAddin __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProjectFrameworkAddin __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IProjectFrameworkAddin __RPC_FAR * This,
            long lSessionID,
            IProjectFramework __RPC_FAR *pApp,
            VARIANT bFirstTime);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Uninitialize )( 
            IProjectFrameworkAddin __RPC_FAR * This,
            long lSessionID);
        
        END_INTERFACE
    } IProjectFrameworkAddinVtbl;

    interface IProjectFrameworkAddin
    {
        CONST_VTBL struct IProjectFrameworkAddinVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProjectFrameworkAddin_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProjectFrameworkAddin_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProjectFrameworkAddin_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProjectFrameworkAddin_Initialize(This,lSessionID,pApp,bFirstTime)	\
    (This)->lpVtbl -> Initialize(This,lSessionID,pApp,bFirstTime)

#define IProjectFrameworkAddin_Uninitialize(This,lSessionID)	\
    (This)->lpVtbl -> Uninitialize(This,lSessionID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IProjectFrameworkAddin_Initialize_Proxy( 
    IProjectFrameworkAddin __RPC_FAR * This,
    long lSessionID,
    IProjectFramework __RPC_FAR *pApp,
    VARIANT bFirstTime);


void __RPC_STUB IProjectFrameworkAddin_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IProjectFrameworkAddin_Uninitialize_Proxy( 
    IProjectFrameworkAddin __RPC_FAR * This,
    long lSessionID);


void __RPC_STUB IProjectFrameworkAddin_Uninitialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProjectFrameworkAddin_INTERFACE_DEFINED__ */


#ifndef __IFrameworkAddin1_INTERFACE_DEFINED__
#define __IFrameworkAddin1_INTERFACE_DEFINED__

/* interface IFrameworkAddin1 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFrameworkAddin1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("275E4F9E-3CF5-40CA-819E-152676DDB72E")
    IFrameworkAddin1 : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IFrameworkAddin1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFrameworkAddin1 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFrameworkAddin1 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFrameworkAddin1 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFrameworkAddin1 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFrameworkAddin1 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFrameworkAddin1 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFrameworkAddin1 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } IFrameworkAddin1Vtbl;

    interface IFrameworkAddin1
    {
        CONST_VTBL struct IFrameworkAddin1Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFrameworkAddin1_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFrameworkAddin1_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFrameworkAddin1_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFrameworkAddin1_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFrameworkAddin1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFrameworkAddin1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFrameworkAddin1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFrameworkAddin1_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ProjectFramework;

#ifdef __cplusplus

class DECLSPEC_UUID("AC8B0EC6-C6D1-4E5E-8CBF-4C7161E92231")
ProjectFramework;
#endif

EXTERN_C const CLSID CLSID_ProjectFrameworkAddin;

#ifdef __cplusplus

class DECLSPEC_UUID("9DF9FC32-65CF-4B49-860D-FC3321F14915")
ProjectFrameworkAddin;
#endif

#ifndef ___IFrameworkAddin1Events_DISPINTERFACE_DEFINED__
#define ___IFrameworkAddin1Events_DISPINTERFACE_DEFINED__

/* dispinterface _IFrameworkAddin1Events */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IFrameworkAddin1Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E00EC30D-2ED8-46D6-B7A0-5E685B3E5DC8")
    _IFrameworkAddin1Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IFrameworkAddin1EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IFrameworkAddin1Events __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IFrameworkAddin1Events __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IFrameworkAddin1Events __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IFrameworkAddin1Events __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IFrameworkAddin1Events __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IFrameworkAddin1Events __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IFrameworkAddin1Events __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IFrameworkAddin1EventsVtbl;

    interface _IFrameworkAddin1Events
    {
        CONST_VTBL struct _IFrameworkAddin1EventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IFrameworkAddin1Events_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IFrameworkAddin1Events_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IFrameworkAddin1Events_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IFrameworkAddin1Events_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IFrameworkAddin1Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IFrameworkAddin1Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IFrameworkAddin1Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IFrameworkAddin1Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FrameworkAddin1;

#ifdef __cplusplus

class DECLSPEC_UUID("E1DD5976-02FF-4316-A061-938854E40101")
FrameworkAddin1;
#endif
#endif /* __ProjectFrameworkLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
