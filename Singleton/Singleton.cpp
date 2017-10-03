#include "stdafx.h"
#include <iostream>
#include "Number.h"

int main()
{
    Number::instance()->SetValue(42);
    Number::instance()->PrintInfo();
    
    Number::SetType(_T("octal"));
    Number::instance()->SetValue(64);
    Number::instance()->PrintInfo();

    std::cin.get();
    return 0;
}

