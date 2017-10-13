/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#include "StdAfx.h"
#include "RobustShapeFactory.h"


////////////////////////////////   PUBLIC    ////////////////////////////////

//============================== Life Cycle   ================================

/*! Default constructor.
 *
 ****************************************************************************/
RobustShapeFactory::RobustShapeFactory()
{
}

/*! Destructor.
 *
 ****************************************************************************/
RobustShapeFactory::~RobustShapeFactory()
{
}

Shape* RobustShapeFactory::createShapeInstance(EShapeType type)
{
	switch (type)
	{
	case eCurved:
		return new Ellipse;
		break;
	case eStraight:
		return new Rectangle;
		break;
	default:
		break;
	}
}

//============================== Operations  ================================

//============================== Access      ================================

////////////////////////////////   PRIVATE   ////////////////////////////////

//============================== Operations  ================================
