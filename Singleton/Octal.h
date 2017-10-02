#pragma once
#include "Number.h"

class Octal : public Number
{
protected:
    Octal();
    ~Octal();

public:
    friend class Number;
    void setValue(int in);
};

