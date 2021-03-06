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
#include "IFactory.h"
#include "Ellipse.h"
#include "Rectangle.h"

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
class RobustShapeFactory : public IFactory
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    RobustShapeFactory();
    //! Copy constructor.
    RobustShapeFactory(const RobustShapeFactory& rSource) = delete;
    //! Destructor.
    virtual ~RobustShapeFactory();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    RobustShapeFactory& operator = (const RobustShapeFactory& rRhs) = delete;
    //@}
    
    /*! \name Operations */
    //{@
	Shape* createShapeInstance(EShapeType type);
	//Shape* createCurvedInstance() { return new Ellipse; }
	//Shape* createStraightInstance() { return new Rectangle; }
    //@}

    /*! \name Access */
    //{@
    
    //@}
   
private:
    /*! \name Attributes */
    //{@
    
    //@}
};

