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
class Square : public Shape
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    Square();
    //! Copy constructor.
    Square(const Square& rSource) = delete;
    //! Destructor.
    virtual ~Square();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    Square& operator = (const Square& rRhs) = delete;
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

