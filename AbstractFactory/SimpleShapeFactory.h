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
#include "Circle.h"
#include "Square.h"

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
class SimpleShapeFactory : public IFactory
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    SimpleShapeFactory();
    //! Copy constructor.
    SimpleShapeFactory(const SimpleShapeFactory& rSource) = delete;
    //! Destructor.
    virtual ~SimpleShapeFactory();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    SimpleShapeFactory& operator = (const SimpleShapeFactory& rRhs) = delete;
    //@}
    
    /*! \name Operations */
    //{@
	Shape* createShapeInstance(EShapeType type);
	//Shape* createCurvedInstance() { return new Circle; }
	//Shape* createStraightInstance() { return new Square; }
    //@}
    
    /*! \name Access */
    //{@
    
    //@}
   
private:
    /*! \name Attributes */
    //{@
    
    //@}
};
