#include <iostream>
#include "getBasicFunction.h"
using namespace std;



int two_dimensional_project(){
	int arr[] = { 4,1,2,3,5 };
	int arrSize = sizeof(arr) / sizeof(arr[0]) - 1;
	int end = arrSize;
	int temp = 0;
	for (int i = 0; i <= arrSize; i++)
	{
		cout << "Before :" << arr[i] << endl;
	
	}
	
	for (int i = 0; i <= arrSize; i++)
	{
		for (int j = 0;j< arrSize -i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for (int i = 0; i <= arrSize; i++)
	{
		cout << "After :" << arr[i] << endl;

	}

	return 0;
}

int two_d_explain() {
	int arr[2][3] = {
		{1,2,3,},
		{4,5,6}
	};
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "first array :" << (int)arr << endl;
	cout << "0 array element :" << (int)arr[0] << endl;
	cout << "1 array element :" << (int)arr[1] << endl;

	cout << "[0][0]" << (int)&arr[0][0] << endl;
	cout << "[0][1]" << (int)&arr[0][1] << endl;

	return 0;
}

void bubble(int* arr, int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
}

void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)

	{
		cout << arr[i] << endl;
	}
}

