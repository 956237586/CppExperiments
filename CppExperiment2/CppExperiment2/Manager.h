/*
æ≠¿Ì Manager
FixedMonthlySalary = 8000
*/
//Manager.h
#ifndef __MANAGER
#define __MANAGER
#include "Staff.h"

class Manager: public Staff{
public:
	Manager(int, string);
	double calculateSalary();
	static const double FIXED_SALARY;
};
#ifdef _DEBUG_
int TestManagerMain();
#endif
#endif // !__MANAGER
