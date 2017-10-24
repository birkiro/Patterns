/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//
#include "Document.h"

// FORWARD REFERENCES
//

/*! SpecificDocument
 ****************************************************************************/
class SpecificDocument : public Document
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    SpecificDocument(char* fn);
	//! Destructor.
	virtual ~SpecificDocument();
	//! Copy constructor.
    SpecificDocument(const SpecificDocument& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    SpecificDocument& operator = (const SpecificDocument& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    void Open();
    void Close();
	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@

	//@}
};
