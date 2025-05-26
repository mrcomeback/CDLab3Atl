#include "pch.h"
#include "ComplexNumber.h"
#include <comdef.h>

STDMETHODIMP CComplexNumber::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = { &IID_IComplex };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CComplexNumber::get_MyRealValue(DOUBLE* pVal)
{
	if (!pVal) return E_POINTER;
	*pVal = m_Number;
	return S_OK;
}

STDMETHODIMP CComplexNumber::put_MyRealValue(DOUBLE val)
{
	m_Number = val;
	return S_OK;
}

STDMETHODIMP CComplexNumber::get_MyImagValue(DOUBLE* pVal)
{
	if (!pVal) return E_POINTER;
	*pVal = m_Imaginary;
	return S_OK;
}

STDMETHODIMP CComplexNumber::put_MyImagValue(DOUBLE val)
{
	m_Imaginary = val;
	return S_OK;
}

STDMETHODIMP CComplexNumber::get_MyModule(DOUBLE* pVal)
{
	if (!pVal) return E_POINTER;
	*pVal = m_Module;
	return S_OK;
}

STDMETHODIMP CComplexNumber::SetModule()
{
	std::complex<double> c(m_Number, m_Imaginary);
	m_Module = abs(c);
	return S_OK;
}

STDMETHODIMP CComplexNumber::SaveToFile(BSTR filePath)
{
	std::wofstream file((const wchar_t*)_bstr_t(filePath), std::ios_base::app);
	if (!file.is_open())
		return E_FAIL;

	file << m_Module << std::endl;
	return S_OK;
}

STDMETHODIMP CComplexNumber::ReadFromFile(BSTR filePath, LONG lineNumber)
{
	_bstr_t path(filePath);
	std::wifstream file((const wchar_t*)path); // ✅ явне приведення

	if (!file.is_open())
		return E_FAIL;

	std::wstring line;
	int currentLine = 0;
	while (std::getline(file, line))
	{
		if (currentLine == lineNumber)
		{
			std::wistringstream iss(line);
			wchar_t comma;
			iss >> m_Number >> comma >> m_Imaginary;
			return S_OK;
		}
		currentLine++;
	}

	return E_FAIL; // Line not found
}
