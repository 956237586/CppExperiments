//Trapezoid.cpp
#include "Trapezoid.h"

Trapezoid::Trapezoid(double top, double height, double bottom) {
	this->top = top;
	this->height = height;
	this->bottom = bottom;
	this->area = getArea();
}

double Trapezoid::getArea() {
	return (top + bottom) * height / 2.0;
}

int TestTrapezoidMain() {
//int main() {
	Shape* trapezoid = new Trapezoid(2, 5, 5);
	cout << trapezoid->getArea() << endl;
	system("pause");
	return 0;
}