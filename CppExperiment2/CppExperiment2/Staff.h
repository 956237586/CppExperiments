#ifndef __STAFF
#define __STAFF
#include "public.h"

class Staff {
public:
	virtual double calculateSalary();
	virtual double calculateSomeThing();
protected:
	int id;//���
	string name;//����
	int level;//���� 1����2���۾���3��ְ������Ա4��ְ����Ա5HR
	double monthSalary;//��н
};

#endif // !__STAFF
