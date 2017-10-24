/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "Application.h"
#include <iostream>


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
Application::Application() : m_Index(0)
{
    std::cout << "Application: ctor" << std::endl;
}

/*! Destructor.
 *
 ****************************************************************************/
Application::~Application()
{
}

//============================== Operators   ================================

//============================== Operations  ================================
void Application::NewDocument(char *name)
{
    std::cout << "Application: NewDocument()" << std::endl;

    m_pDocuments[m_Index] = CreateDocument(name);
    m_pDocuments[m_Index++]->Open();
}

void Application::OpenDocument()
{
    // Not implemented yet
}

void Application::ReportDocs()
{
    std::cout << "Application: ReportDocs()" << std::endl;
    for (int i = 0; i < m_Index; i++)
        std::cout << " " << m_pDocuments[i]->GetName() << std::endl;
}
//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
