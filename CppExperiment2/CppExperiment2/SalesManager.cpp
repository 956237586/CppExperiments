//SalesManager.h
/*
class Staff {
public:
virtual double calculateSalary();
protected:
int id;//编号
string name;//姓名
static int level;//级别 1经理2销售经理3兼职技术人员4兼职推销员
double monthSalary;//月薪
};
*/
#include "SalesManager.h"
const double SalesManager::CUT = 0.05;
SalesManager::SalesManager(int id, string name): Manager::Manager(id, name){
	this->level = 2;
}

double SalesManager::calculateSalary(){
	//模拟一个数据
	salesAmount = 1000;
	monthSalary = salesAmount * CUT + FIXED_SALARY;
	Staff::calculateSalary();
	return 0.0;
}
#ifdef _DEBUG_
int TestSalesManagerMain() {
	Staff* s = new SalesManager(2, "lisi");
	s->calculateSalary();
	delete s;
	system("pause");
	return 0;
}
#endif
