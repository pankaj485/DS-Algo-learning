#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    system("CLS");

    int size;
    cout << "size : ";
    cin >> size;
    int a[size];

    cout << "data : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int ans = 2;                  // at least 2 is needed  , we need to calculate max subarray length
    int difference = a[1] - a[0]; // initial difference
    int currentLength = 2;        // initial length while checking index 0 and 1
    int j = 2;                    // 0 and 1 index for difference

    while (j < size)
    {

        if (difference == a[j] - a[j - 1])
        {
            // cout << "a[" << j << "] - a[" << j - 1 << "] : " << a[j] - a[j - 1] << endl;
            currentLength++;
        }
        else
        {
            difference = a[j] - a[j - 1];
            currentLength = 2;
        }

        ans = max(ans, currentLength);

        j++;
    }

    cout << "max subarray length : " << ans;

    return 0;
}

// lesson => try to break down your problem in your way of thinking