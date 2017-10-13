/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "SimpleShapeFactory.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
SimpleShapeFactory::SimpleShapeFactory()
{
}

/*! Destructor.
 *
 ****************************************************************************/
SimpleShapeFactory::~SimpleShapeFactory()
{
}

Shape* SimpleShapeFactory::createShapeInstance(EShapeType type)
{
	switch (type)
	{
	case eCurved:
		return new Circle;
		break;
	case eStraight:
		return new Square;
		break;
	default:
		break;
	}
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
