//PartTimeSalesman.h
/*

��ְ����Ա PartTimeSalesman
cut //���4%
*/
#ifndef __PART_TIME_SALESMAN
#define __PART_TIME_SALESMAN
#include "Staff.h"

class PartTimeSalesman: public Staff{
public:
	PartTimeSalesman(int, string);
	double calculateSalary();
	static const double CUT;
private:
	double salesAmount;
};
#ifdef _DEBUG_
int TestPartTimeSalesManMain();
#endif
#endif // __PART_TIME_SALESMAN
