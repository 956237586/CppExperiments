//Exercese2_arraymax.cpp
#include "Exercise2_arraymax.h"

void ArrayMax::setValue() {
	cout << "Please input 10 numbers:" << endl;
	for (int i = 0; i < 10; i++)
		cin >> array[i];
}

void ArrayMax::maxValue() {
	max = array[0];
	for (int i = 1; i < size; i++)
		if (array[i] > max)max = array[i];
}

void ArrayMax::showValue() {
	cout << "max = " << max << endl;;
}
