/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "LegacyRectangle.h"
#include <iostream>

////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
LegacyRectangle::LegacyRectangle(Coordinate x1, Coordinate y1, Coordinate x2, Coordinate y2)
{
    m_X1 = x1;
    m_Y1 = y1;
    m_X2 = x2;
    m_Y2 = y2;
    std::cout << "LegacyRectangle: create. (" << m_X1 << "," << m_Y1 << ") => ("
        << m_X2 << "," << m_Y2 << ")" << std::endl;
}

/*! Destructor.
 *
 ****************************************************************************/


//============================== Operators   ================================

//============================== Operations  ================================
void LegacyRectangle::oldDraw()
{
    std::cout << "LegacyRectangle: oldDraw. (" << m_X1 << "," << m_Y1 <<
        ") => (" << m_X2 << "," << m_Y2 << ")" << std::endl;
}
//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================