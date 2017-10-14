#pragma once

#include "DistributedWorkPackage.h"

class IBuilder
{
public:
    virtual void ConfigureFile(char*) = 0;
    virtual void ConfigureQueue(char*) = 0;
    virtual void ConfigurePathway(char*) = 0;
    DistributedWorkPackage* GetResult() { return m_Result; }

protected:
    DistributedWorkPackage* m_Result;
};