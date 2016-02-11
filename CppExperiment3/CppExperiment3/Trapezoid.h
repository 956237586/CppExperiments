//Trapezoid.h
#ifndef __TRAPEZOID__
#define __TRAPEZOID__
#include "Shape.h"
#include "Point.h"

class Trapezoid : public Shape {
private:
	//若以后有需要
	//Point* point1;
	//Point* point2;
	//Point* point3;
	//Point* point4;
	double height;//高
	double top;//上底长度
	double bottom;//下底长度
public:
	Trapezoid(double, double, double);
	double getArea();
};

#endif // !__TRAPEZOID__
