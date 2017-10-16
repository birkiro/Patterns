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
class UnixBuilder : public IBuilder
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    UnixBuilder() { m_Result = new DistributedWorkPackage("Unix"); }
	//! Destructor.
	virtual ~UnixBuilder(){}
	//! Copy constructor.
    UnixBuilder(const UnixBuilder& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    UnixBuilder& operator = (const UnixBuilder& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    void ConfigureFile(char *name) { m_Result->SetFile("flatFile", name); }
    void ConfigureQueue(char *queue) { m_Result->SetQueue("FIFO", queue); }
    void ConfigurePathway(char *type) { m_Result->SetPathway("thread", type); }
	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@

	//@}
};