//Square.h
#ifndef __SQUARE__
#define __SQUARE__

#include "Shape.h"
#include "Point.h"
class Square : public Shape {
private:
	Point* center;
	double side;
public:
	Square(Point&, double);
	Square(double, double, double);
	Square(const Square &);
	double getArea();
};

#endif