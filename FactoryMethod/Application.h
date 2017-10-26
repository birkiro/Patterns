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

/*! Application
 *
 ****************************************************************************/
class Application
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Application();
	//! Destructor.
	virtual ~Application();
	//! Copy constructor.
    Application(const Application& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Application& operator = (const Application& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    void NewDocument(char *name);
    void OpenDocument();
    void ReportDocs();
    /* Framework declares a "hole" for the client to customize */
    virtual Document* CreateDocument(char*) = 0;
	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@
    int m_Index;
    /* Framework uses Document's base class */
    Document* m_pDocuments[10];
	//@}
};
