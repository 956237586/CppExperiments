//PartTimeTechnician.h
/*
兼职技术人员 PartTimeTechnician
HourlySalary = 100
*/
#ifndef __PART_TIME_TECHNICIAN
#define __PART_TIME_TECHNICIAN
#include "Staff.h"

class PartTimeTechnician: public Staff{
public:
	PartTimeTechnician(int, string);
	double calculateSalary();
	static const double HOURLY_SALARY;
private:
	double amountHour;
};
#ifdef _DEBUG_
int TestPartTimeTechnicianMain();
#endif
#endif // !__PART_TIME_TECHNICIAN
