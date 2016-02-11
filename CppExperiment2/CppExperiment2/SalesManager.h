/*
销售经理 SalesManager
DepartmentOfManagement =
cut //提成比例5%
*/
//SalesManager.h
#ifndef __SALES_MANAGER
#define __SALES_MANAGER
#include "Manager.h"

class SalesManager: public Manager {
public:
	SalesManager(int, string);
	double calculateSalary();
	static const double CUT;
private:
	double salesAmount;
	//DepartmentOfManagement = 
};
#ifdef _DEBUG_
int TestSalesManagerMain();
#endif
#endif // !__SALES_MANAGER
