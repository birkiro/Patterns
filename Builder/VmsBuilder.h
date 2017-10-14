#pragma once

#include "IBuilder.h"

class VmsBuilder : public IBuilder
{
public:
    VmsBuilder() { m_Result = new DistributedWorkPackage("Vms"); }
    void ConfigureFile(char *name) { m_Result->SetFile("ISAM", name); }
    void ConfigureQueue(char *queue) { m_Result->SetQueue("priority", queue); }
    void ConfigurePathway(char *type) { m_Result->SetPathway("LWP", type); }
};