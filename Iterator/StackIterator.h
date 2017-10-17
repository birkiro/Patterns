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
#include "Stack.h"

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
class StackIterator
{
public:
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
    StackIterator(const Stack* s) { m_Stack = s; }
	//! Destructor.
	virtual ~StackIterator(){}
	//! Copy constructor.
    StackIterator(const StackIterator& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    StackIterator& operator = (const StackIterator& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    void first() { m_Index = 0; }
    void next() { m_Index++; }
    bool isDone() { return m_Index == (m_Stack->m_Pos + 1); } 
    int currentItem() { m_Stack->m_IntList[m_Index]; }
	//@}

	/*! \name Access */
	//{@

	//@}
    
private:
	/*! \name Attributes */
	//{@
    const Stack* m_Stack;
    int m_Index;
	//@}
};
