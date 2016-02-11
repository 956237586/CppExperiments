//Manager.cpp
#include "Manager.h"

const double Manager::FIXED_SALARY = 8000;
Manager::Manager(int id, string name) {
	this->id = id;
	this->name = name;
	this->level = 1;
}

double Manager::calculateSalary(){
	monthSalary = 8000;
	Staff::calculateSalary();
	return monthSalary;
}

#ifdef _DEBUG_
int TestManagerMain() {
	Staff* s = new Manager(1, "zhangsan");
	s->calculateSalary();
	delete s;
	system("pause");
	return 0;
}
#endif