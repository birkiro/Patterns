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

/*! <One line description>
 *
 * \ingroup <GroupName>
 *
 * <A longer description> 
 *
 * \see <Something>
 ****************************************************************************/
class Shape
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    Shape();
    //! Copy constructor.
    Shape(const Shape& rSource) = delete;
    //! Destructor.
    virtual ~Shape();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    Shape& operator = (const Shape& rRhs) = delete;
    //@}
    
    /*! \name Operations */
    //{@
    
    //@}
    
    /*! \name Access */
    //{@
    
    //@}
   
private:
    /*! \name Attributes */
    //{@
    
    //@}
};
