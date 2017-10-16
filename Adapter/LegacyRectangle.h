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

typedef int Coordinate;
typedef int Dimension;

/*! <One line description>
 *
 * \ingroup <GroupName>
 *
 * <A longer description> 
 *
 * \see <Something>
 ****************************************************************************/

class LegacyRectangle
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    LegacyRectangle(Coordinate x1, Coordinate y1, Coordinate x2, Coordinate y2);
	//! Destructor.
	virtual ~LegacyRectangle(){}
	//! Copy constructor.
    LegacyRectangle(const LegacyRectangle& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    LegacyRectangle& operator = (const LegacyRectangle& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    
    void oldDraw();
	//@}

	/*! \name Access */
	//{@

	//@}

private:
	/*! \name Attributes */
	//{@
    Coordinate m_X1;
    Coordinate m_Y1;
    Coordinate m_X2;
    Coordinate m_Y2;
	//@}
};