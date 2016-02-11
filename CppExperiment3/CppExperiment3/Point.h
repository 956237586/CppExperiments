//Point.h
#ifndef __POINT__
#define __POINT__
#include "Shape.h"
class Point : public Shape {
public:
	double y;
	double x;
	Point(double, double);
	double getArea();
};

#endif