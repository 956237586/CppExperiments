//PartTimeTechnician.cpp
#include "PartTimeTechnician.h"

const double PartTimeTechnician::HOURLY_SALARY = 100;

PartTimeTechnician::PartTimeTechnician(int id, string name){
	this->id = id;
	this->name = name;
	this->level = 3;
}

double PartTimeTechnician::calculateSalary() {
	amountHour = 200;//模拟一个数据
	monthSalary = amountHour * HOURLY_SALARY;
	Staff::calculateSalary();
	return monthSalary;
}

#ifdef _DEBUG_
int TestPartTimeTechnicianMain() {
	Staff* s = new PartTimeTechnician(3, "wangwu");
	s->calculateSalary();
	delete s;
	system("pause");
	return 0;
}
#endif
