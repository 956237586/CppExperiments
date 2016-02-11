//Shape.cpp
#include "Shape.h"

Shape::Shape() {
	area = 0;
#ifdef _DEBUG_
	cout << "Shape Constructor" << endl;
#endif // _DEBUG_
}

double Shape::getArea() {
	return 0.0;
}
