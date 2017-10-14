#pragma once
#include "IBuilder.h"

class UnixBuilder : public IBuilder
{
public:
    UnixBuilder() { m_Result = new DistributedWorkPackage("Unix"); }
    void ConfigureFile(char *name) { m_Result->SetFile("flatFile", name); }
    void ConfigureQueue(char *queue) { m_Result->SetQueue("FIFO", queue); }
    void ConfigurePathway(char *type) { m_Result->SetPathway("thread", type); }
};