//Trapezoid.h
#ifndef __TRAPEZOID__
#define __TRAPEZOID__
#include "Shape.h"
#include "Point.h"

class Trapezoid : public Shape {
private:
	//���Ժ�����Ҫ
	//Point* point1;
	//Point* point2;
	//Point* point3;
	//Point* point4;
	double height;//��
	double top;//�ϵ׳���
	double bottom;//�µ׳���
public:
	Trapezoid(double, double, double);
	double getArea();
};

#endif // !__TRAPEZOID__
