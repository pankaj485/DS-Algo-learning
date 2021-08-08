#include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
using namespace std;

bool pairsum(int arr[], int size, int sum)
{
    int low = 0;
    int high = size - 1;

    // we check the elements resulting to sum so individual element equating to sum won't be counted
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > sum)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
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

    cout << pairsum(arr, size, sum);

    return 0;
}