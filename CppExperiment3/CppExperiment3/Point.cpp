//Point.cpp
#include "Point.h"

Point::Point(double x, double y){
	this->x = x;
	this->y = y;
	this->area = getArea();
#ifdef _DEBUG_
	cout << "Point Constructor" << endl;
#endif // _DEBUG_
}

double Point::getArea(){
	return 0;
}
