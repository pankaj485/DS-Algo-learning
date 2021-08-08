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

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum;

    return 0;
}