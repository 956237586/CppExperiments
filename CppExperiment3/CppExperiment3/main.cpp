//main.cpp
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "Triangle.h"

int main() {
	Shape* shapes[5];
	shapes[0] = new Square(0, 0, 5);
	shapes[1] = new Rectangle(0, 0, 2, 5);
	shapes[2] = new Circle(0, 0, 5);
	shapes[3] = new Trapezoid(2, 5, 5);
	shapes[4] = new Triangle(2, 5);
	double sumArea = 0;
	for (int i = 0; i < 5; i++){
		double t = shapes[i]->getArea();
		cout << "Area[" << i << "] is " << t << endl;
		sumArea += t;
	}
	cout << "The sum area is " << sumArea << endl;
	system("pause");
	return 0;
}