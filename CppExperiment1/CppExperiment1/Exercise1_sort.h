//Exercise1_sort.h
#ifndef __SORT
#define __SORT
#include "public.h"
template <class numType>
void sort(int n, numType a[]) {
	if (n == 0 || a == NULL)return;
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < a[min])min = j;
		if (i != min) {
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
}

#endif // !__SORT
