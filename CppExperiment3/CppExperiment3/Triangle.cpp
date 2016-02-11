//Triangle.cpp
#include "Triangle.h"

Triangle::Triangle(double bottom, double height) {
	this->bottom = bottom;
	this->height = height;
	this->area = getArea();
}

double Triangle::getArea() {
	return 0.5 * bottom * height;
}

int TestTriangleMain() {
//int main() {
	Shape* triangle = new Triangle(2, 5.5);
	cout << triangle->getArea() << endl;
	system("pause");
	return 0;
}

