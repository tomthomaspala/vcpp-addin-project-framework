/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Nov 16 17:36:40 2004
 */
/* Compiler settings for D:\tom\Projects\Addin Project Framework\Addin2\Addin2.idl:
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

#ifndef __Addin2_h__
#define __Addin2_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IFramworkObject2_FWD_DEFINED__
#define __IFramworkObject2_FWD_DEFINED__
typedef interface IFramworkObject2 IFramworkObject2;
#endif 	/* __IFramworkObject2_FWD_DEFINED__ */


#ifndef ___IFramworkObject2Events_FWD_DEFINED__
#define ___IFramworkObject2Events_FWD_DEFINED__
typedef interface _IFramworkObject2Events _IFramworkObject2Events;
#endif 	/* ___IFramworkObject2Events_FWD_DEFINED__ */


#ifndef __FramworkObject2_FWD_DEFINED__
#define __FramworkObject2_FWD_DEFINED__

#ifdef __cplusplus
typedef class FramworkObject2 FramworkObject2;
#else
typedef struct FramworkObject2 FramworkObject2;
#endif /* __cplusplus */

#endif 	/* __FramworkObject2_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IFramworkObject2_INTERFACE_DEFINED__
#define __IFramworkObject2_INTERFACE_DEFINED__

/* interface IFramworkObject2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFramworkObject2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6F55852-9E39-4CB3-A581-3D905F518499")
    IFramworkObject2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Function1( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFramworkObject2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFramworkObject2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFramworkObject2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFramworkObject2 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFramworkObject2 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFramworkObject2 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFramworkObject2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFramworkObject2 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Function1 )( 
            IFramworkObject2 __RPC_FAR * This);
        
        END_INTERFACE
    } IFramworkObject2Vtbl;

    interface IFramworkObject2
    {
        CONST_VTBL struct IFramworkObject2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFramworkObject2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFramworkObject2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFramworkObject2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFramworkObject2_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFramworkObject2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFramworkObject2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFramworkObject2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFramworkObject2_Function1(This)	\
    (This)->lpVtbl -> Function1(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFramworkObject2_Function1_Proxy( 
    IFramworkObject2 __RPC_FAR * This);


void __RPC_STUB IFramworkObject2_Function1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFramworkObject2_INTERFACE_DEFINED__ */



#ifndef __ADDIN2Lib_LIBRARY_DEFINED__
#define __ADDIN2Lib_LIBRARY_DEFINED__

/* library ADDIN2Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ADDIN2Lib;

#ifndef ___IFramworkObject2Events_DISPINTERFACE_DEFINED__
#define ___IFramworkObject2Events_DISPINTERFACE_DEFINED__

/* dispinterface _IFramworkObject2Events */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IFramworkObject2Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F1ACFB5-514F-4188-9FD8-20E2428178F6")
    _IFramworkObject2Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IFramworkObject2EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IFramworkObject2Events __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IFramworkObject2Events __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IFramworkObject2Events __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IFramworkObject2Events __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IFramworkObject2Events __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IFramworkObject2Events __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IFramworkObject2Events __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IFramworkObject2EventsVtbl;

    interface _IFramworkObject2Events
    {
        CONST_VTBL struct _IFramworkObject2EventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IFramworkObject2Events_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IFramworkObject2Events_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IFramworkObject2Events_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IFramworkObject2Events_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IFramworkObject2Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IFramworkObject2Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IFramworkObject2Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IFramworkObject2Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FramworkObject2;

#ifdef __cplusplus

class DECLSPEC_UUID("76E278FD-DCDF-497E-8602-E7295F26AC99")
FramworkObject2;
#endif
#endif /* __ADDIN2Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
