/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "RectangleAdapter.h"
#include <iostream>


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
RectangleAdapter::RectangleAdapter(Coordinate x, Coordinate y, Dimension w, Dimension h) 
    : LegacyRectangle(x, y, x + w, y + h)
{
    std::cout   << "RectangleAdapter: create. (" << x << "," << y 
                << "), width = " << w 
                << ", height = " << h 
                << std::endl;
}

void RectangleAdapter::draw()
{
    std::cout << "RectangleAdapter: draw." << std::endl;
    oldDraw();
}

/*! Destructor.
 *
 ****************************************************************************/
RectangleAdapter::~RectangleAdapter()
{
}

//============================== Operators   ================================

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
