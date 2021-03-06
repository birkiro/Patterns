// Builder.cpp : Defines the entry point for the console application.
//

// SYSTEM INCLUDES
//
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "DistributedWorkPackage.h"
#include "UnixBuilder.h"
#include "VmsBuilder.h"
#include "Reader.h"

// LOCAL INCLUDES
//

const int NUM_ENTRIES = 6;
PersistenceAttribute input[NUM_ENTRIES] =
{
    { eFile, "state.dat" }, 
    { eFile, "config.sys" }, 
    { eQueue, "compute" }, 
    { eQueue, "log" }, 
    { ePathway, "authentication" },
    { ePathway, "error processing" }
};

int main()
{
	UnixBuilder unixBuilder;
	VmsBuilder vmsBuilder;
	Reader reader;

	reader.SetBuilder(&unixBuilder);
	reader.Construct(input, NUM_ENTRIES);
	std::wcout << unixBuilder.GetResult()->GetState() << std::endl;

	reader.SetBuilder(&vmsBuilder);
	reader.Construct(input, NUM_ENTRIES);
	std::wcout << vmsBuilder.GetResult()->GetState() << std::endl;

    std::cin.get();
}