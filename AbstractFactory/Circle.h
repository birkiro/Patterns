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
#include "Shape.h"

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
class Circle : public Shape
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    Circle();
    //! Copy constructor.
    Circle(const Circle& rSource) = delete;
    //! Destructor.
    virtual ~Circle();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    Circle& operator = (const Circle& rRhs) = delete;
    //@}
    
    /*! \name Operations */
    //{@
	virtual void draw();
    //@}
    
    /*! \name Access */
    //{@
    
    //@}
   
private:
    /*! \name Attributes */
    //{@
    
    //@}
};