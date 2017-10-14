/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Circle.h"
#include <iostream>


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Circle::Circle()
{
}

/*! Destructor.
 *
 ****************************************************************************/
Circle::~Circle()
{
}

void Circle::Draw()
{
	std::wcout << _T("Drawing Circle.") << std::endl;
}

void Circle::PrintInfo()
{
	std::wcout << _T("Printing Class ") << typeid(Circle).name() << _T(", ID no: ") << m_Id << std::endl;
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
	