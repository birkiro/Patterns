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

// FORWARD REFERENCES
//

/*! Document
 *
 ****************************************************************************/
class Document
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Document(char *fn);
	//! Destructor.
	virtual ~Document();
	//! Copy constructor.
    Document(const Document& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Document& operator = (const Document& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    virtual void Open() = 0;
    virtual void Close() = 0;
	//@}

	//{@
	/*! \name Access */
    char* GetName() { return m_Name; }
	//@}

private:
	/*! \name Attributes */
	//{@
    char m_Name[20];
	//@}
};
