/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#include "Application.h"
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//

// FORWARD REFERENCES
//

/*! SpecificApplication
 *
 ****************************************************************************/
class SpecificApplication : public Application
{
public:
	/*! \name Life Cycle */
	//{@    
	//! Default constructor.
	SpecificApplication();
	//! Destructor.
	virtual ~SpecificApplication();
	//! Copy constructor.
    SpecificApplication(const SpecificApplication& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    SpecificApplication& operator = (const SpecificApplication& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    virtual Document* CreateDocument(char *fn);
	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@

	//@}
};
