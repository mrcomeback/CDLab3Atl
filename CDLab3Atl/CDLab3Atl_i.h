

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for CDLab3Atl.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CDLab3Atl_i_h__
#define __CDLab3Atl_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IComplex_FWD_DEFINED__
#define __IComplex_FWD_DEFINED__
typedef interface IComplex IComplex;

#endif 	/* __IComplex_FWD_DEFINED__ */


#ifndef __IRational_FWD_DEFINED__
#define __IRational_FWD_DEFINED__
typedef interface IRational IRational;

#endif 	/* __IRational_FWD_DEFINED__ */


#ifndef __IPersistent_FWD_DEFINED__
#define __IPersistent_FWD_DEFINED__
typedef interface IPersistent IPersistent;

#endif 	/* __IPersistent_FWD_DEFINED__ */


#ifndef __ComplexNumber_FWD_DEFINED__
#define __ComplexNumber_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComplexNumber ComplexNumber;
#else
typedef struct ComplexNumber ComplexNumber;
#endif /* __cplusplus */

#endif 	/* __ComplexNumber_FWD_DEFINED__ */


#ifndef __RationalNumber_FWD_DEFINED__
#define __RationalNumber_FWD_DEFINED__

#ifdef __cplusplus
typedef class RationalNumber RationalNumber;
#else
typedef struct RationalNumber RationalNumber;
#endif /* __cplusplus */

#endif 	/* __RationalNumber_FWD_DEFINED__ */


#ifndef __IComplex_FWD_DEFINED__
#define __IComplex_FWD_DEFINED__
typedef interface IComplex IComplex;

#endif 	/* __IComplex_FWD_DEFINED__ */


#ifndef __IRational_FWD_DEFINED__
#define __IRational_FWD_DEFINED__
typedef interface IRational IRational;

#endif 	/* __IRational_FWD_DEFINED__ */


#ifndef __IPersistent_FWD_DEFINED__
#define __IPersistent_FWD_DEFINED__
typedef interface IPersistent IPersistent;

#endif 	/* __IPersistent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IComplex_INTERFACE_DEFINED__
#define __IComplex_INTERFACE_DEFINED__

/* interface IComplex */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IComplex;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9D88FABC-95AC-4176-AE1F-97B0C87E4F31")
    IComplex : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetModule( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadFromFile( 
            /* [in] */ BSTR filePath,
            /* [in] */ LONG lineNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveToFile( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MyRealValue( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MyRealValue( 
            /* [in] */ DOUBLE val) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MyImagValue( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_MyImagValue( 
            /* [in] */ DOUBLE val) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_MyModule( 
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComplexVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComplex * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComplex * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComplex * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComplex * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComplex * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComplex * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComplex * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IComplex, SetModule)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetModule )( 
            IComplex * This);
        
        DECLSPEC_XFGVIRT(IComplex, ReadFromFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadFromFile )( 
            IComplex * This,
            /* [in] */ BSTR filePath,
            /* [in] */ LONG lineNumber);
        
        DECLSPEC_XFGVIRT(IComplex, SaveToFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            IComplex * This,
            /* [in] */ BSTR filePath);
        
        DECLSPEC_XFGVIRT(IComplex, get_MyRealValue)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MyRealValue )( 
            IComplex * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(IComplex, put_MyRealValue)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MyRealValue )( 
            IComplex * This,
            /* [in] */ DOUBLE val);
        
        DECLSPEC_XFGVIRT(IComplex, get_MyImagValue)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MyImagValue )( 
            IComplex * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        DECLSPEC_XFGVIRT(IComplex, put_MyImagValue)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MyImagValue )( 
            IComplex * This,
            /* [in] */ DOUBLE val);
        
        DECLSPEC_XFGVIRT(IComplex, get_MyModule)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MyModule )( 
            IComplex * This,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IComplexVtbl;

    interface IComplex
    {
        CONST_VTBL struct IComplexVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComplex_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComplex_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComplex_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComplex_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComplex_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComplex_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComplex_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComplex_SetModule(This)	\
    ( (This)->lpVtbl -> SetModule(This) ) 

#define IComplex_ReadFromFile(This,filePath,lineNumber)	\
    ( (This)->lpVtbl -> ReadFromFile(This,filePath,lineNumber) ) 

#define IComplex_SaveToFile(This,filePath)	\
    ( (This)->lpVtbl -> SaveToFile(This,filePath) ) 

#define IComplex_get_MyRealValue(This,pVal)	\
    ( (This)->lpVtbl -> get_MyRealValue(This,pVal) ) 

#define IComplex_put_MyRealValue(This,val)	\
    ( (This)->lpVtbl -> put_MyRealValue(This,val) ) 

#define IComplex_get_MyImagValue(This,pVal)	\
    ( (This)->lpVtbl -> get_MyImagValue(This,pVal) ) 

#define IComplex_put_MyImagValue(This,val)	\
    ( (This)->lpVtbl -> put_MyImagValue(This,val) ) 

#define IComplex_get_MyModule(This,pVal)	\
    ( (This)->lpVtbl -> get_MyModule(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComplex_INTERFACE_DEFINED__ */


#ifndef __IRational_INTERFACE_DEFINED__
#define __IRational_INTERFACE_DEFINED__

/* interface IRational */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRational;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EABE18C2-3A6F-437B-89A0-E3BE74B7BD9B")
    IRational : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setSqrt( 
            /* [defaultvalue][in] */ VARIANT_BOOL isNegative = 0) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE setConjugate( 
            /* [in] */ IRational *rational) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadFromFile( 
            /* [in] */ BSTR filePath,
            /* [in] */ LONG lineNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveToFile( 
            /* [in] */ BSTR filePath) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Sqrt( 
            /* [retval][out] */ DOUBLE *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRationalVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRational * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRational * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRational * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRational * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRational * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRational * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRational * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IRational, setSqrt)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setSqrt )( 
            IRational * This,
            /* [defaultvalue][in] */ VARIANT_BOOL isNegative);
        
        DECLSPEC_XFGVIRT(IRational, setConjugate)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *setConjugate )( 
            IRational * This,
            /* [in] */ IRational *rational);
        
        DECLSPEC_XFGVIRT(IRational, ReadFromFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadFromFile )( 
            IRational * This,
            /* [in] */ BSTR filePath,
            /* [in] */ LONG lineNumber);
        
        DECLSPEC_XFGVIRT(IRational, SaveToFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            IRational * This,
            /* [in] */ BSTR filePath);
        
        DECLSPEC_XFGVIRT(IRational, get_Sqrt)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sqrt )( 
            IRational * This,
            /* [retval][out] */ DOUBLE *value);
        
        END_INTERFACE
    } IRationalVtbl;

    interface IRational
    {
        CONST_VTBL struct IRationalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRational_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRational_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRational_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRational_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRational_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRational_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRational_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRational_setSqrt(This,isNegative)	\
    ( (This)->lpVtbl -> setSqrt(This,isNegative) ) 

#define IRational_setConjugate(This,rational)	\
    ( (This)->lpVtbl -> setConjugate(This,rational) ) 

#define IRational_ReadFromFile(This,filePath,lineNumber)	\
    ( (This)->lpVtbl -> ReadFromFile(This,filePath,lineNumber) ) 

#define IRational_SaveToFile(This,filePath)	\
    ( (This)->lpVtbl -> SaveToFile(This,filePath) ) 

#define IRational_get_Sqrt(This,value)	\
    ( (This)->lpVtbl -> get_Sqrt(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRational_INTERFACE_DEFINED__ */


#ifndef __IPersistent_INTERFACE_DEFINED__
#define __IPersistent_INTERFACE_DEFINED__

/* interface IPersistent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPersistent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B4781F4-571D-4E0A-B97B-FB22E0A7CE92")
    IPersistent : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadFromFile( 
            /* [in] */ BSTR filePath,
            /* [in] */ LONG lineNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveToFile( 
            /* [in] */ BSTR filePath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersistentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersistent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersistent * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersistent * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPersistent * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPersistent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPersistent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPersistent * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IPersistent, ReadFromFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadFromFile )( 
            IPersistent * This,
            /* [in] */ BSTR filePath,
            /* [in] */ LONG lineNumber);
        
        DECLSPEC_XFGVIRT(IPersistent, SaveToFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            IPersistent * This,
            /* [in] */ BSTR filePath);
        
        END_INTERFACE
    } IPersistentVtbl;

    interface IPersistent
    {
        CONST_VTBL struct IPersistentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersistent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersistent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersistent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersistent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPersistent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPersistent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPersistent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPersistent_ReadFromFile(This,filePath,lineNumber)	\
    ( (This)->lpVtbl -> ReadFromFile(This,filePath,lineNumber) ) 

#define IPersistent_SaveToFile(This,filePath)	\
    ( (This)->lpVtbl -> SaveToFile(This,filePath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersistent_INTERFACE_DEFINED__ */



#ifndef __CDLab3AtlLib_LIBRARY_DEFINED__
#define __CDLab3AtlLib_LIBRARY_DEFINED__

/* library CDLab3AtlLib */
/* [version][uuid] */ 







EXTERN_C const IID LIBID_CDLab3AtlLib;
#endif /* __CDLab3AtlLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


