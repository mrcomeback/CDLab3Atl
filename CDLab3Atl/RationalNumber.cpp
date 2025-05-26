#include "pch.h"
#include "RationalNumber.h"
#include <comdef.h>

STDMETHODIMP CRationalNumber::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = { &IID_IRational };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CRationalNumber::setSqrt(VARIANT_BOOL isNegative)
{
	if (m_Denominator == 0) return E_FAIL;

	double value = static_cast<double>(m_Numerator) / m_Denominator;
	m_Sqrt = isNegative ? std::sqrt(std::complex<double>(-value, 0)) : std::sqrt(std::complex<double>(value, 0));

	return S_OK;
}

STDMETHODIMP CRationalNumber::setConjugate(IRational* other)
{
	if (!other)
		return E_POINTER;

	CComQIPtr<IRational> otherRational(other);
	if (!otherRational)
		return E_NOINTERFACE;

	DOUBLE sqrtOther = 0.0;
	HRESULT hr = otherRational->get_Sqrt(&sqrtOther);
	if (FAILED(hr))
		return hr;

	std::complex<double> sum = m_Sqrt + std::complex<double>(sqrtOther, 0);
	m_Conjugate = std::conj(sum);

	return S_OK;
}

STDMETHODIMP CRationalNumber::get_Sqrt(DOUBLE* value)
{
	if (!value) return E_POINTER;
	*value = m_Sqrt.real();
	return S_OK;
}


STDMETHODIMP CRationalNumber::SaveToFile(BSTR filePath)
{
	std::wofstream file((const wchar_t*)_bstr_t(filePath), std::ios_base::app);
	if (!file.is_open())
		return E_FAIL;

	file << m_Conjugate.real() << L"," << m_Conjugate.imag() << std::endl;
	return S_OK;
}

STDMETHODIMP CRationalNumber::ReadFromFile(BSTR filePath, LONG lineNumber)
{
	_bstr_t path(filePath);
	std::wifstream file((const wchar_t*)path);

	if (!file.is_open())
		return E_FAIL;

	std::wstring line;
	int currentLine = 0;
	while (std::getline(file, line))
	{
		if (currentLine == lineNumber)
		{
			std::wistringstream iss(line);
			std::wstring num, den;
			if (std::getline(iss, num, L'/') && std::getline(iss, den))
			{
				m_Numerator = _wtoi(num.c_str());
				m_Denominator = _wtoi(den.c_str());
				if (m_Denominator == 0)
					return E_FAIL;
				return S_OK;
			}
		}
		currentLine++;
	}

	return E_FAIL; // Line not found
}
