/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "SpecificApplication.h"
#include <iostream>
#include "SpecificDocument.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
SpecificApplication::SpecificApplication()
{
    std::cout << "SpecificApplication: ctor" << std::endl;
}

/*! Destructor.
 *
 ****************************************************************************/
SpecificApplication::~SpecificApplication()
{
}

//============================== Operators   ================================

//============================== Operations  ================================
Document* SpecificApplication::CreateDocument(char *fn)
{
    std::cout << " SpecificApplication: CreateDocument()" << std::endl;
    return new SpecificDocument(fn);
}


//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
