#include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
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

    // wrapping and non-wrapping concept is explained in the lecture 16:00

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, size);

    int totalSum = 0;
    for (int i = 0; i < size; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, size);
    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}