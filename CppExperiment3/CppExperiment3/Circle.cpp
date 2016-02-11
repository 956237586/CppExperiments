//Circle.cpp
#include "Circle.h"

Circle::Circle(Point &center, double radius){
	this->center = &center;
	this->radius = radius;
	this->area = getArea();
#ifdef _DEBUG_
	cout << "Circle Constructor" << endl;
#endif // _DEBUG_
}

Circle::Circle(double centerX, double centerY, double radius){
	this->center = new Point(centerX, centerY);
	this->radius = radius;
	this->area = getArea();
#ifdef _DEBUG_
	cout << "Circle Constructor" << endl;
#endif // _DEBUG_
}

Circle::Circle(const Circle& res){
	this->radius = res.radius;
	this->area = res.area;
	this->center = new Point(*res.center);
}

double Circle::getArea(){
	return area = 3.1415926 * radius * radius;
}

int TestCircleMain() {
//int main() {
	Shape* circle = new Circle(1, 1, 1);
	cout << circle->getArea() << endl;
	system("pause");
	return 0;
}