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
#include "Number.h"

// FORWARD REFERENCES
//

/*! Octal
 *
 * \ingroup Singleton
 *
 * Inherits Number 
 ****************************************************************************/
class Octal : public Number
{
//public:
//    friend class Number; // TODO: Is this needed?

public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    Octal();
    //! Copy constructor.
    Octal(const Octal& rSource) = delete;
    //! Destructor.
    virtual ~Octal();
    //@}
    
    /*! \name Operators */
    //{@
    //! Assignment operator.
    Octal& operator = (const Octal& rRhs) = delete;
    //@}
    
    /*! \name Operations */
    //{@
    void setValue(int in);
    //@}
    
    /*! \name Access */
    //{@
    
    //@}
   
private:
    /*! \name Attributes */
    //{@
    
    //@}
};