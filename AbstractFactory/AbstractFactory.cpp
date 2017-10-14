// AbstractFactory.cpp : Defines the entry point for the console application.
//

// SYSTEM INCLUDES
//
#include "stdafx.h"

// LOCAL INCLUDES
//
#include "Shape.h"
#include "IFactory.h"
#include "SimpleShapeFactory.h"
#include <vector>
#include "RobustShapeFactory.h"
#include <iostream>

#define ROBUST

int Shape::g_ObjectCount = 0;

int main()
{
#ifdef SIMPLE
	IFactory* factory = new SimpleShapeFactory;
#endif
#ifdef ROBUST
 	IFactory* factory = new RobustShapeFactory;
#endif

	std::vector<Shape*> shapeList;

	shapeList.push_back(factory->createShapeInstance(EShapeType::eCurved));
	shapeList.push_back(factory->createShapeInstance(EShapeType::eStraight));
	shapeList.push_back(factory->createShapeInstance(EShapeType::eCurved));
	shapeList.push_back(factory->createShapeInstance(EShapeType::eCurved));

	for (auto* s : shapeList) 
	{
		s->PrintInfo();
		s->Draw(); 
	}

	std::cin.get();

    return 0;
}

