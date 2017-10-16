/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Reader.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Reader::Reader()
{
}

/*! Destructor.
 *
 ****************************************************************************/
Reader::~Reader()
{
}

//============================== Operators   ================================

//============================== Operations  ================================
void Reader::Construct(PersistenceAttribute list[], int num)
{
    for (int i = 0; i < num; i++)
        if (list[i].type == eFile)
            m_Builder->ConfigureFile(list[i].value);
        else if (list[i].type == eQueue)
            m_Builder->ConfigureQueue(list[i].value);
        else if (list[i].type == ePathway)
            m_Builder->ConfigurePathway(list[i].value);
}

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================