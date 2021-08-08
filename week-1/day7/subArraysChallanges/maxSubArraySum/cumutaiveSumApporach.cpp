#include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
using namespace std;

/* 
we can have various approach to solve problems 
--brute force
--optimizeed 

in the problem , we can use following methods to utilize it better solutin 
--commutive sum apporach (refer notes)
--kadane's algorithm (refer notes)
*/

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

    int currentSum[size + 1];
    currentSum[0] = 0;

    for (int i = 1; i < size; i++)
    {
        // storing current sum
        currentSum[i] = currentSum[i - 1] + arr[i - 1];
    }

    // storing maximum sum
    int maxSum = INT_MIN;

    for (int i = 1; i <= size; i++)
    {
        // local scope sum
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currentSum[i];
            maxSum = max(sum, maxSum);
        }
    }

    cout << maxSum;

    return 0;
}