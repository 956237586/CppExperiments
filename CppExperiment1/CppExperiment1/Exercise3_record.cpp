//Exercise3_record.cpp
#include "Exercise3_record.h"
double Record::discount = 0.98;
double Record::sum = 0;
int Record::n = 0;
Record::Record(int num, int quantity, double price) {
	this->num = num;
	this->quantity = quantity;
	this->price = price;
	cout << "num = " << num << "\tquantity = " << quantity
		<< "\tprice = " << price << endl;
	n += quantity;
	if (quantity > 10) {
		sum += 10 * price;
		quantity -= 10;
		sum += quantity * price * discount;
	} else sum += quantity * price;
	
}

void Record::display() {
	cout << "sum = " << sum << endl;
	cout << "average = " << average() << endl;
}

double Record::average() {
	return sum / n;
}