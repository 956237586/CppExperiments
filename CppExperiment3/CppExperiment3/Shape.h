//Shape.h
#ifndef __SHAPE__
#define __SHAPE__
#include "public.h"
class Shape {
protected:
	double area;
public:
	Shape();
	virtual double getArea();
};

#endif