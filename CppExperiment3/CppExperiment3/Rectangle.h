//Rectangle.h
#ifndef __RECTANGLE__
#define __RECTANGLE__

#include "Shape.h"
#include "Point.h"
class Rectangle : public Shape {
private:
	Point* center;
	double width;
	double height;
public:
	Rectangle(Point&, double, double);
	Rectangle(double, double, double, double);
	Rectangle(const Rectangle &);
	double getArea();
};

#endif