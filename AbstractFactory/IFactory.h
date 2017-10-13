/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#include "Shape.h"
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//

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
class IFactory
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    IFactory();
    //! Copy constructor.
    IFactory(const IFactory& rSource) = delete;
    //! Destructor.
    virtual ~IFactory();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    IFactory& operator = (const IFactory& rRhs) = delete;
    //@}
    
    /*! \name Operations */
    //{@
	virtual Shape* createShapeInstance(EShapeType type) = 0;
	//virtual Shape* createCurvedInstance() = 0;
	//virtual Shape* createStraightInstance() = 0;
    //@}
    
    /*! \name Access */
    //{@
    
    //@}
   
private:
    /*! \name Attributes */
    //{@
    
    //@}
};
