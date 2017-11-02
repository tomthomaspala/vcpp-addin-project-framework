/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Nov 19 16:31:39 2004
 */
/* Compiler settings for D:\tom\Projects\Addin Project Framework\Addin1\Addin1.idl:
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

#ifndef __Addin1_h__
#define __Addin1_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IFramworkObject1_FWD_DEFINED__
#define __IFramworkObject1_FWD_DEFINED__
typedef interface IFramworkObject1 IFramworkObject1;
#endif 	/* __IFramworkObject1_FWD_DEFINED__ */


#ifndef ___IFramworkObject1Events_FWD_DEFINED__
#define ___IFramworkObject1Events_FWD_DEFINED__
typedef interface _IFramworkObject1Events _IFramworkObject1Events;
#endif 	/* ___IFramworkObject1Events_FWD_DEFINED__ */


#ifndef __FramworkObject1_FWD_DEFINED__
#define __FramworkObject1_FWD_DEFINED__

#ifdef __cplusplus
typedef class FramworkObject1 FramworkObject1;
#else
typedef struct FramworkObject1 FramworkObject1;
#endif /* __cplusplus */

#endif 	/* __FramworkObject1_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IFramworkObject1_INTERFACE_DEFINED__
#define __IFramworkObject1_INTERFACE_DEFINED__

/* interface IFramworkObject1 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFramworkObject1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E888C30D-BEDE-41B0-B994-E9F60A14D147")
    IFramworkObject1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Function2( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Function3( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFramworkObject1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFramworkObject1 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFramworkObject1 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFramworkObject1 __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IFramworkObject1 __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IFramworkObject1 __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IFramworkObject1 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IFramworkObject1 __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Function2 )( 
            IFramworkObject1 __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Function3 )( 
            IFramworkObject1 __RPC_FAR * This);
        
        END_INTERFACE
    } IFramworkObject1Vtbl;

    interface IFramworkObject1
    {
        CONST_VTBL struct IFramworkObject1Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFramworkObject1_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFramworkObject1_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFramworkObject1_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFramworkObject1_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IFramworkObject1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IFramworkObject1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IFramworkObject1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IFramworkObject1_Function2(This)	\
    (This)->lpVtbl -> Function2(This)

#define IFramworkObject1_Function3(This)	\
    (This)->lpVtbl -> Function3(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFramworkObject1_Function2_Proxy( 
    IFramworkObject1 __RPC_FAR * This);


void __RPC_STUB IFramworkObject1_Function2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IFramworkObject1_Function3_Proxy( 
    IFramworkObject1 __RPC_FAR * This);


void __RPC_STUB IFramworkObject1_Function3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFramworkObject1_INTERFACE_DEFINED__ */



#ifndef __ADDIN1Lib_LIBRARY_DEFINED__
#define __ADDIN1Lib_LIBRARY_DEFINED__

/* library ADDIN1Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ADDIN1Lib;

#ifndef ___IFramworkObject1Events_DISPINTERFACE_DEFINED__
#define ___IFramworkObject1Events_DISPINTERFACE_DEFINED__

/* dispinterface _IFramworkObject1Events */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IFramworkObject1Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("21025DA6-316C-4105-999E-B2D0BAE73EE1")
    _IFramworkObject1Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IFramworkObject1EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IFramworkObject1Events __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IFramworkObject1Events __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IFramworkObject1Events __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IFramworkObject1Events __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IFramworkObject1Events __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IFramworkObject1Events __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IFramworkObject1Events __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IFramworkObject1EventsVtbl;

    interface _IFramworkObject1Events
    {
        CONST_VTBL struct _IFramworkObject1EventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IFramworkObject1Events_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IFramworkObject1Events_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IFramworkObject1Events_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IFramworkObject1Events_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IFramworkObject1Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IFramworkObject1Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IFramworkObject1Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IFramworkObject1Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FramworkObject1;

#ifdef __cplusplus

class DECLSPEC_UUID("7D551674-7F84-477E-85F3-E16B48AEC20F")
FramworkObject1;
#endif
#endif /* __ADDIN1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
