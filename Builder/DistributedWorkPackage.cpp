
#include "stdafx.h"
#include "DistributedWorkPackage.h"
#include <stdio.h>
#include <string.h>

DistributedWorkPackage::DistributedWorkPackage(char *type)
{
    sprintf_s(m_Description, "Distributed Work Package for: %s", type);
}

void DistributedWorkPackage::SetFile(char *f, char *v)
{
    sprintf_s(m_TempString, "\n  File(%s): %s", f, v);
    strcat_s(m_Description, m_TempString);
}

void DistributedWorkPackage::SetQueue(char *q, char *v)
{
    sprintf_s(m_TempString, "\n  Queue(%s): %s", q, v);
    strcat_s(m_Description, m_TempString);
}

void DistributedWorkPackage::SetPathway(char *p, char *v)
{
    sprintf_s(m_TempString, "\n  Pathway(%s): %s", p, v);
    strcat_s(m_Description, m_TempString);
}

const char* DistributedWorkPackage::GetState()
{
    return m_Description;
}
