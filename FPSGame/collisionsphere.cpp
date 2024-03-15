#include "collisionsphere.h"

collisionsphere::collisionsphere()
{
	this->r = 0;
}

collisionsphere::collisionsphere(const vector3d& vec, float rad)
{
	centre.change(vec);
	this->r = rad;
}
