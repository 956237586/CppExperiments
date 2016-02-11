//Square.cpp
#include "Square.h"
Square::Square(Point& center, double side) {
	this->center = &center;
	this->side = side;
	this->area = getArea();
}

Square::Square(double centerX, double centerY, double side) {
	this->center = new Point(centerX, centerY);
	this->side = side;
	this->area = getArea();
}

Square::Square(const Square &res){
	this->center = new Point(*res.center);
	this->side = res.side;
	this->area = res.area;
}

double Square::getArea() {
	return area = side * side;
}

int TestSquareMain() {
//int main() {
	Shape* square = new Square(1, 1, 5);
	cout << square->getArea() << endl;
	system("pause");
	return 0;
}