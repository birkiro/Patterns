#include "stdafx.h"
#include <iostream>
#include "Number.h"

int main()
{
    // Number  myInstance; - error: cannot access protected constructor
    // 5. Clients may only use the accessor function to manipulate the Singleton
    Number::GetInstance()->SetValue(42);
    std::cout << "value is " << Number::GetInstance()->GetValue() << std::endl;
    Number::SetType(_T("octal"));
    Number::GetInstance()->SetValue(64);
    std::cout << "value is " << Number::GetInstance()->GetValue() << std::endl;


    std::cin.get();
    return 0;
}

