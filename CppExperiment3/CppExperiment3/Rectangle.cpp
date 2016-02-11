//Rectangle.cpp
#include "Rectangle.h"


Rectangle::Rectangle(Point &center, double width, double height) {
	this->width = width;
	this->height = height;
	this->area = getArea();
#ifdef _DEBUG_
	cout << "Rectangle Constructor" << endl;
#endif // _DEBUG_
}

Rectangle::Rectangle(double centerX, double centerY,
					double width, double height) {
	this->center = new Point(centerX, centerY);
	this->width = width;
	this->height = height;
	this->area = getArea();
}

Rectangle::Rectangle(const Rectangle &res) {
	this->center = new Point(*res.center);
	this->width = res.width;
	this->height = res.height;
	this->area = res.area;
}

double Rectangle::getArea() {
	return area = width * height;
}

int TestRectangleMain() {
//int main() {
	Shape* rectangle = new Rectangle(1, 1, 4, 5);
	cout << rectangle->getArea() << endl;
	system("pause");
	return 0;
}