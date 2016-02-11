#include "HR.h"

HR::HR() {
	this->level = 5;
}

HR::HR(int id, string name) {
	this->id = id;
	this->name = name;
	this->level = 5;
}

double HR::calculateSalary() {
	monthSalary = 1000;
	Staff::calculateSalary();
	return monthSalary;
}

double HR::calculateSomeThing() {
	return 2000.0;
}
#ifdef _DEBUG_
int TestHR() {
	Staff *hr = new HR(1, "123123");
	cout << "get1:" << hr->calculateSalary() << endl;
	cout << "get2:" << hr->calculateSomeThing() << endl;
	system("pause");
	return 0;
}
#endif
