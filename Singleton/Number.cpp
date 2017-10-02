#include "stdafx.h"
#include "Number.h"
#include <iostream>
#include "Octal.h"


Number::Number()
{
    std::cout << "Number Constructor Called." << std::endl;
}

Number* Number::GetInstance()
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

std::wstring Number::m_Type = _T("decimal");
Number *Number::m_pInstance = 0;
