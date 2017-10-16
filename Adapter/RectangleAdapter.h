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
#include "LegacyRectangle.h"
#include "IRectangle.h"

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
class RectangleAdapter : public IRectangle, private LegacyRectangle
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    RectangleAdapter(Coordinate x, Coordinate y, Dimension w, Dimension h);
	//! Destructor.
	virtual ~RectangleAdapter();
	//! Copy constructor.
    RectangleAdapter(const RectangleAdapter& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    RectangleAdapter& operator = (const RectangleAdapter& rRhs) = delete;
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