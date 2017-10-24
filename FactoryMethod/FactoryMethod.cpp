// FactoryMethod.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>

#include "SpecificApplication.h"


int main()
{
    /* Client's customization of the Framework */
    SpecificApplication myApp;

    myApp.NewDocument("foo");
    myApp.NewDocument("bar");
    myApp.ReportDocs();

    std::cin.get();
}


