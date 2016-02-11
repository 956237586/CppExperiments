//main.cpp

/*

某小型公司，主要有四类人：
经理、
兼职技术人员、
销售经理和
兼职推销员。
现在，需要存储这些人员的姓名、编号、级别、当月薪水、计算月薪总额并显示全部信息。
薪金计算方法如下：
1、经理：8000元/月
2、兼职技术人员：100元/小时
3、兼职推销员：月薪=该推销员当月销售额的4%提成
4、销售经理：即拿固定月薪又拿销售提成。固定月薪=5000元/月，销售提成为所管部门当月销售总额的5%
根据以上需求完成
1、	提供类设计方案，其中成员函数可不详细定义。
2、	整个程序采取多文件存储，请说明整个程序的存储方案。

*/

#include "Manager.h"
#include "SalesManager.h"
#include "PartTimeTechnician.h"
#include "PartTimeSalesman.h"
#include "HR.h"

int main() {
#ifdef _DEBUG_
	TestHR();
	TestManagerMain();
	TestSalesManagerMain();
	TestPartTimeTechnicianMain();
	TestPartTimeSalesManMain();
#endif // _DEBUG_
	//Do something
	return 0;
}
