#ifndef __STAFF
#define __STAFF
#include "public.h"

class Staff {
public:
	virtual double calculateSalary();
	virtual double calculateSomeThing();
protected:
	int id;//编号
	string name;//姓名
	int level;//级别 1经理2销售经理3兼职技术人员4兼职推销员5HR
	double monthSalary;//月薪
};

#endif // !__STAFF
