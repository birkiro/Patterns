/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Square.h"
#include <iostream>


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Square::Square()
{
}

/*! Destructor.
 *
 ****************************************************************************/
Square::~Square()
{
}

void Square::Draw()
{
	std::wcout << _T("Drawing Square.") << std::endl;
}

void Square::PrintInfo()
{
	std::wcout << _T("Printing Class ") << typeid(Square).name() << _T(", ID no: ") << m_Id << std::endl;
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
