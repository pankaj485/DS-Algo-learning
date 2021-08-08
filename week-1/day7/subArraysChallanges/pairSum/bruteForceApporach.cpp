#include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
using namespace std;

bool pairSum(int arr[], int size, int sum)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

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

    int sum;
    cout << "sum : ";
    cin >> sum;

    cout << pairSum(arr, size, sum) << endl;

    return 0;
}