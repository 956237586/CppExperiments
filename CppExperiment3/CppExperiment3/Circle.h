//Circle.h
#ifndef __CIRCLE__
#define __CIRCLE__
#include "Shape.h"
#include "Point.h"

class Circle :public Shape {
private:
	Point* center;
	double radius;
public:
	Circle(Point&, double);
	Circle(double, double, double);
	Circle(const Circle&);
	double getArea();
};

#endif