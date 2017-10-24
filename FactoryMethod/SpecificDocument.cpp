/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "SpecificDocument.h"
#include <iostream>


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
SpecificDocument::SpecificDocument(char* fn) : Document(fn)
{
}

/*! Destructor.
 *
 ****************************************************************************/
SpecificDocument::~SpecificDocument()
{
}

//============================== Operators   ================================

//============================== Operations  ================================
void SpecificDocument::Open()
{
    std::cout << " SpecificDocument: Open()" << std::endl;
}

void SpecificDocument::Close()
{
    std::cout << " SpecificDocument: Close()" << std::endl;
}
//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
