#pragma once
#include "resource.h"
#include "CDLab3Atl_i.h"

#include <fstream>
#include <sstream>
#include <complex>
#include "CDLab3Atl_i.c"

using namespace ATL;

class ATL_NO_VTABLE CComplexNumber :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CComplexNumber, &CLSID_ComplexNumber>,
	public ISupportErrorInfo,
	public IDispatchImpl<IComplex, &IID_IComplex, &LIBID_CDLab3AtlLib, 0>,
	public IDispatchImpl<IPersistent, &IID_IPersistent, &LIBID_CDLab3AtlLib, 0>
{
public:
	CComplexNumber() : m_Number(0), m_Imaginary(0), m_Module(0) {}

	DECLARE_REGISTRY_RESOURCEID(106)

	BEGIN_COM_MAP(CComplexNumber)
		COM_INTERFACE_ENTRY(IComplex)
		COM_INTERFACE_ENTRY(IPersistent)
		COM_INTERFACE_ENTRY(ISupportErrorInfo)
	END_COM_MAP()

	// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct() { return S_OK; }
	void FinalRelease() {}

private:
	double m_Number;
	double m_Imaginary;
	double m_Module;

public:
	// Властивості
	STDMETHOD(get_MyRealValue)(DOUBLE* pVal);
	STDMETHOD(put_MyRealValue)(DOUBLE val);

	STDMETHOD(get_MyImagValue)(DOUBLE* pVal);
	STDMETHOD(put_MyImagValue)(DOUBLE val);

	STDMETHOD(get_MyModule)(DOUBLE* pVal);

	// Методи
	STDMETHOD(SetModule)();
	STDMETHOD(ReadFromFile)(BSTR filePath, LONG lineNumber);
	STDMETHOD(SaveToFile)(BSTR filePath);
};

OBJECT_ENTRY_AUTO(CLSID_ComplexNumber, CComplexNumber)
