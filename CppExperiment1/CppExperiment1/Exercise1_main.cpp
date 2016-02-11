//Exercise1_main.cpp
#include "Exercise1_sort.h"
#include "Exercises.h"

int Exercise1_main() {
	//int array[10] = { 1,2,3,4,8,6,7,5,9,0,};
	//int n = sizeof(array) / sizeof(array[0]);
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++)
		cin >> array[i];
	
	cout << "Before sort:" << endl;
	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;

	sort(n, array);
	cout << "After sort:" << endl;
	for (int i = 0; i < n; i++)
		cout << array[i] << " " ;
	cout << endl;
	return 0;
}

