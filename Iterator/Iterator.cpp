/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/

#include "stdafx.h"
#include "StackIterator.h"

bool operator == (const Stack &l, const Stack &r)
{
    // 3. Clients ask the container object to create an iterator object
    StackIterator *itl = l.createIterator();
    StackIterator *itr = r.createIterator();
    // 4. Clients use the first(), isDone(), next(), and currentItem() protocol
    for (itl->first(), itr->first(); !itl->isDone(); itl->next(), itr->next())
        if (itl->currentItem() != itr->currentItem())
            break;
    bool ans = itl->isDone() && itr->isDone();
    delete itl;
    delete itr;
    return ans;
}


int main()
{
    return 0;
}

