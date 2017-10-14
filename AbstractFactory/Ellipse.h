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
class Ellipse : public Shape
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    Ellipse();
    //! Copy constructor.
    Ellipse(const Ellipse& rSource) = delete;
    //! Destructor.
    virtual ~Ellipse();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    Ellipse& operator = (const Ellipse& rRhs) = delete;
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
