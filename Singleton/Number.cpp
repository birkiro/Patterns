/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include <iostream>

#include "Number.h"
#include "Octal.h"

////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Number::Number()
{
    std::wcout << _T("Number Constructor Called.") << std::endl;
}

/*! Destructor.
 *
 ****************************************************************************/
Number::~Number()
{
}

//======================== Singleton Instantiation  ===========================

std::wstring Number::m_Type = _T("decimal");
Number *Number::m_pInstance = 0;

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

//============================== Operations  ================================

void Number::PrintInfo()
{
    std::wcout << _T("Type is: ") << GetType() << _T(" - Value is: ") << m_Value << std::endl;
}

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
