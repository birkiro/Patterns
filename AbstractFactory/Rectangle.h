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
class Rectangle : public Shape
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    Rectangle();
    //! Copy constructor.
    Rectangle(const Rectangle& rSource) = delete;
    //! Destructor.
    virtual ~Rectangle();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    Rectangle& operator = (const Rectangle& rRhs) = delete;
    //@}
    
    /*! \name Operations */
    //{@
	virtual void Draw();
	virtual void PrintInfo();
    //@}
    
    /*! \name Access */
    //{@
    
    //@}
   
private:
    /*! \name Attributes */
    //{@
    
    //@}
};
