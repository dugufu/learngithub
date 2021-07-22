#include <iostream>

int arraySize(int *a) {

	int getArraySize = (sizeof(a) / sizeof(*a));
	return getArraySize;
}