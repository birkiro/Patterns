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

void Rectangle::draw()
{
	std::wcout << _T("Drawing Rectangle.") << std::endl;
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
