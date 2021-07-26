#include <iostream>

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