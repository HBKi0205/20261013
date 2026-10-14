#pragma once
#include "Vector3D.h"
#include "Polygon.h"

class Collision
{
public:
	//‹…‚ÆŽOŠpŒ`‚Ì“–‚½‚è”»’è
	bool CheckSphereTriangle(const Vector3& sphereCenter, 
		float sphereRadius, const Polygon& polygon) const;

private:
	bool IsPointSideTriangle(Vector3 point, const Polygon& polygon) const;
};

