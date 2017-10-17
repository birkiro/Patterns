/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#include "StackIterator.h"
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//

// FORWARD REFERENCES
//

#define MAX_SIZE 10

/*! <One line description>
 *
 * \ingroup <GroupName>
 *
 * <A longer description> 
 *
 * \see <Something>
 ****************************************************************************/
class Stack
{
public:
    friend class StackIterator;
	/*! \name Life Cycle */
	//{@
	//! Default constructor.
	Stack();
	//! Destructor.
	virtual ~Stack();
	//! Copy constructor.
    Stack(const Stack& rSource) = delete;
	//@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    Stack& operator = (const Stack& rRhs) = delete;
	//@}

	/*! \name Operations */
	//{@
    void push(int val) { m_IntList[++m_Pos] = val; }
    int pop() { return m_IntList[m_Pos--]; }
    bool isEmpty() { return m_Pos == -1; }
	//@}

	/*! \name Access */
	//{@
    StackIterator* createIterator()const;
	//@}

private:
	/*! \name Attributes */
	//{@
    int m_IntList[MAX_SIZE];
    int m_Pos;
	//@}
};
