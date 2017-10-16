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
#include "IBuilder.h"

// FORWARD REFERENCES
//

/*! <One line description>
 *
 * \ingroup <GroupName>
 *
 * <A longer description> 
 *
 * \see <Something>
 ****************************************************************************/

enum EPersistenceType
{
    eFile,
    eQueue,
    ePathway
};

struct PersistenceAttribute
{
    EPersistenceType type;
    char value[30];
};

class Reader
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    Reader();
	//! Destructor.
    virtual ~Reader();
	//! Copy constructor.
    Reader(const Reader& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Reader& operator = (const Reader& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    void SetBuilder(IBuilder *b) { m_Builder = b; }
    void Construct(PersistenceAttribute[], int);
	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@
    IBuilder* m_Builder;
	//@}
};