//main.cpp

/*

ĳС�͹�˾����Ҫ�������ˣ�
����
��ְ������Ա��
���۾����
��ְ����Ա��
���ڣ���Ҫ�洢��Щ��Ա����������š����𡢵���нˮ��������н�ܶ��ʾȫ����Ϣ��
н����㷽�����£�
1������8000Ԫ/��
2����ְ������Ա��100Ԫ/Сʱ
3����ְ����Ա����н=������Ա�������۶��4%���
4�����۾������ù̶���н����������ɡ��̶���н=5000Ԫ/�£��������Ϊ���ܲ��ŵ��������ܶ��5%
���������������
1��	�ṩ����Ʒ��������г�Ա�����ɲ���ϸ���塣
2��	���������ȡ���ļ��洢����˵����������Ĵ洢������

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
