/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
// SYSTEM INCLUDES
//
#include "stdafx.h"
#include "IRectangle.h"
#include "RectangleAdapter.h"
#include <iostream>

int main()
{
    IRectangle* pRectangle = new RectangleAdapter(120, 200, 60, 40);
    pRectangle->draw();

    std::cin.get();
}
