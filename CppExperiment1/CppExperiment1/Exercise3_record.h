//Exercise3_record.h
#ifndef __RECORD
#define __RECORD
#include "public.h"

class Record {
private:
	static double discount;
	static double sum;
	static int n;
	static double average();
	int num;
	int quantity;
	double price;
public:
	static void display();
	Record(int, int, double);
};

#endif // !__RECORD

