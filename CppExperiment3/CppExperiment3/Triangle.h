//Triangle.h
#ifndef __TRIANGLE__
#define __TRIANGLE__
#include "Shape.h"
#include "Point.h"

class Triangle : public Shape {
private:
	//Point* point1;
	//Point* point2;
	//Point* point3;
	//如果有需要
	double bottom;
	double height;
public:
	Triangle(double, double);
	double getArea();
};

#endif // !TRIANGLE
