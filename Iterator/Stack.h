// /*! \company               $CompanyInfo:$
// *   \version               $Revision:$
// *   \checkindate           $Date:$
// *   \file                  $RCSfile:$
// ***************************************************************************/
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

#define MAX_SIZE 10

/*! <One line description>
 *
 * \ingroup <GroupName>
 *
 * <A longer description> 
 *
 * \see <Something>
 ****************************************************************************/
// class Stack
// {
//     int m_Items[10];
//     int m_Stkptr;
// public:
//     friend class StackIterator;
// 
//     Stack() { m_Stkptr = -1; }
//     void push(int in){m_Items[++m_Stkptr] = in; }
//     int pop(){ return m_Items[m_Stkptr--]; }
//     bool isEmpty(){ return (m_Stkptr == -1); }
//     
//     StackIterator *createIterator() const;  // 2. Add a createIterator() member
// };
// 
// class StackIterator
// {
//     // 1. Design an "iterator" class
//     const Stack* m_Stack;
//     int m_Index;
// public:
//     StackIterator(const Stack *s){ m_Stack = s; }
//     
//     void first() { m_Index = 0; }
//     void next() {m_Index++;}
//     bool isDone(){return m_Index == m_Stack->m_Stkptr + 1;}
//     int currentItem(){ return m_Stack->m_Items[m_Index]; }
// };
// 
// StackIterator* Stack::createIterator() const 
// { 
//     return new StackIterator(this); 
// }
// 
// bool operator == (const Stack &l, const Stack &r)
// {
//     // 3. Clients ask the container object to create an iterator object
//     StackIterator *itl = l.createIterator();
//     StackIterator *itr = r.createIterator();
//     // 4. Clients use the first(), isDone(), next(), and currentItem() protocol
//     for (itl->first(), itr->first(); !itl->isDone(); itl->next(), itr->next())
//         if (itl->currentItem() != itr->currentItem())
//             break;
//     bool ans = itl->isDone() && itr->isDone();
//     delete itl;
//     delete itr;
//     return ans;
// }