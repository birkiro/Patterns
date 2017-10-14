#pragma once
#include "IBuilder.h"


enum EPersistenceType
{
    eFile,
    eQueue,
    ePathway
};

struct PersistenceAttribute
{
    EPersistenceType type;
    char value[30];
};

class Reader
{
public:
    void SetBuilder(IBuilder *b) { m_Builder = b; }
    void Construct(PersistenceAttribute[], int);
private:
    IBuilder* m_Builder;
};