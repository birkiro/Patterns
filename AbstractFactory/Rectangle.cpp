/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Rectangle.h"
#include <iostream>


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Rectangle::Rectangle()
{
}

/*! Destructor.
 *
 ****************************************************************************/
Rectangle::~Rectangle()
{
}

void Rectangle::Draw()
{
	std::wcout << _T("Drawing Rectangle.") << std::endl;
}

void Rectangle::PrintInfo()
{
	std::wcout << _T("Printing Class ") << typeid(Rectangle).name() << _T(", ID no: ") << m_Id << std::endl;
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
