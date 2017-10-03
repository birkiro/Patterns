#include "stdafx.h"
#include "Number.h"
#include <iostream>
#include "Octal.h"


Number::Number()
{
    std::wcout << _T("Number Constructor Called.") << std::endl;
}

Number* Number::instance()
{
    if (!m_pInstance)
    {
        if (m_Type == _T("octal"))
            m_pInstance = new Octal();
        else
            m_pInstance = new Number();
    }
    return m_pInstance;
}

void Number::SetType(std::wstring type)
{
    m_Type = type;
}

void Number::PrintInfo()
{
    std::wcout << _T("Type is: ") << GetType() << _T(" - Value is: ") << m_Value << std::endl;
}

std::wstring Number::m_Type = _T("decimal");
Number *Number::m_pInstance = 0;
