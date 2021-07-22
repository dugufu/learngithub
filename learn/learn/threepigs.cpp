#include <iostream>
#include <array>
#include "getBasicFunction.h"
using namespace std;



void threepigs()
{
    int pigs[] = { 100,200,600,400,500 };
    int max = 0;
    int maxArrayIndex = 0;;

    cout << sizeof(pigs) << " " << sizeof(pigs[0]);
    int pigSize = sizeof(pigs) / sizeof(pigs[0]);

    system("pause");
    for (int i = 0; i < pigSize; i++)
    {
        if (max < pigs[i])
        {
            max = pigs[i];
            maxArrayIndex = i;
            cout << "Changing value : from " << max << " to " << pigs[i] << endl;
        }
        else if (max > pigs[i]) {
            cout << "No changing cause of " << pigs[i] << " is smaller than " << max << endl;
        }

    }

    cout << "Max value is positioning array pigs[ " << maxArrayIndex << " ]" << endl;

}
