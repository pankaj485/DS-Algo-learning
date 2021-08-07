#include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
using namespace std;

int main()
{
    system("CLS");

    int size;
    cout << "size : ";
    cin >> size;

    int arr[size];

    cout << "values : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int minElement = arr[0];
    int minElementIndex;

    for (int i = 0; i < size; i++)
    {
        // int currentElement = arr[i];
        for (int j = 0; j < i; j++)
        {
            cout << "i:" << i << ",j:" << j << endl;
            if (arr[i] == arr[j])
            {
                cout << arr[i] << "," << arr[j] << endl;
                minElement = min(arr[i], minElement);
                break;
            }
        }

        cout << "========== \n";
    }

    int i = 0;
    while (i < size)
    {
        if (arr[i] == minElement)
        {
            minElementIndex = i;
            break;
        }
        i++;
    }

    cout << "Min element : " << minElement << ", min index : " << minElementIndex << endl;

    return 0;
}