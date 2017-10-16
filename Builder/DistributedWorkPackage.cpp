
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
    AppendString();
}

void DistributedWorkPackage::SetQueue(char *q, char *v)
{
    sprintf_s(m_TempString, "\n  Queue(%s): %s", q, v);
    AppendString();
}

void DistributedWorkPackage::SetPathway(char *p, char *v)
{
    sprintf_s(m_TempString, "\n  Pathway(%s): %s", p, v);
    AppendString();
}

void DistributedWorkPackage::AppendString()
{
    strcat_s(m_Description, sizeof(m_Description) + 50, m_TempString);
}

const char* DistributedWorkPackage::GetState()
{
    return m_Description;
}
