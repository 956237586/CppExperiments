#ifndef _HR_
#define _HR_
#include "public.h"
#include "Staff.h"
class HR : public Staff {
private:
	string blablabla;
public:
	HR();
	HR(int id, string name);
	double calculateSalary();
	double calculateSomeThing();
};
#ifdef _DEBUG_
int TestHR();
#endif
#endif