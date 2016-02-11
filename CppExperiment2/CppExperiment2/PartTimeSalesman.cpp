//PartTimeSalesman.cpp
#include "PartTimeSalesman.h"

const double PartTimeSalesman::CUT = 0.04;

PartTimeSalesman::PartTimeSalesman(int id, string name){
	this->id = id;
	this->name = name;
	this->level = 4;
}

double PartTimeSalesman::calculateSalary() {
	salesAmount = 20000;//模拟一个数据
	monthSalary = salesAmount * CUT;
	Staff::calculateSalary();
	return monthSalary;
}

#ifdef _DEBUG_
int TestPartTimeSalesManMain() {
	Staff* s = new PartTimeSalesman(4, "xiaoming");
	s->calculateSalary();
	delete s;
	system("pause");
	return 0;
}
#endif
