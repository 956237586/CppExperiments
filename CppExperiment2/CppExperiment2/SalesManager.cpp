//SalesManager.h
/*
class Staff {
public:
virtual double calculateSalary();
protected:
int id;//���
string name;//����
static int level;//���� 1����2���۾���3��ְ������Ա4��ְ����Ա
double monthSalary;//��н
};
*/
#include "SalesManager.h"
const double SalesManager::CUT = 0.05;
SalesManager::SalesManager(int id, string name): Manager::Manager(id, name){
	this->level = 2;
}

double SalesManager::calculateSalary(){
	//ģ��һ������
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
