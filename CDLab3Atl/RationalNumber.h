#pragma once
#include "resource.h"
#include "CDLab3Atl_i.h"

#include <fstream>
#include <sstream>
#include <complex>
#include "CDLab3Atl_i.c"

using namespace ATL;

class ATL_NO_VTABLE CRationalNumber :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CRationalNumber, &CLSID_RationalNumber>,
	public ISupportErrorInfo,
	public IDispatchImpl<IRational, &IID_IRational, &LIBID_CDLab3AtlLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IPersistent, &IID_IPersistent, &LIBID_CDLab3AtlLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CRationalNumber() : m_Numerator(0), m_Denominator(1), m_Sqrt(0, 0), m_Conjugate(0, 0) {}

	DECLARE_REGISTRY_RESOURCEID(107)

	BEGIN_COM_MAP(CRationalNumber)
		COM_INTERFACE_ENTRY(IRational)
		COM_INTERFACE_ENTRY(IPersistent)
		COM_INTERFACE_ENTRY(ISupportErrorInfo)
	END_COM_MAP()

	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

	DECLARE_PROTECT_FINAL_CONSTRUCT()
	HRESULT FinalConstruct() { return S_OK; }
	void FinalRelease() {}

private:
	int m_Numerator;
	int m_Denominator;
	std::complex<double> m_Sqrt;
	std::complex<double> m_Conjugate;

public:
	STDMETHOD(setSqrt)(VARIANT_BOOL isNegative = VARIANT_FALSE);
	STDMETHOD(setConjugate)(IRational* other);
	STDMETHOD(ReadFromFile)(BSTR filePath, LONG lineNumber);
	STDMETHOD(SaveToFile)(BSTR filePath);
	STDMETHOD(get_Sqrt)(DOUBLE* value);
};

OBJECT_ENTRY_AUTO(CLSID_RationalNumber, CRationalNumber)
