/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Ellipse.h"
#include <iostream>


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Ellipse::Ellipse()
{
}

/*! Destructor.
 *
 ****************************************************************************/
Ellipse::~Ellipse()
{
}

void Ellipse::Draw()
{
	std::wcout << _T("Drawing Ellipse.") << std::endl;
}

void Ellipse::PrintInfo()
{
	std::wcout << _T("Printing Class ") << typeid(Ellipse).name() << _T(", ID no: ") << m_Id << std::endl;
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
