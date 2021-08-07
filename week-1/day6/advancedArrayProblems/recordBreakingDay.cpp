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
    int a[size + 1]; // kina vane actual value vanda pani arko next value check garnca cha i.e aja ko value sanga hijo ra voli ko garna parcha and if index last ko lagi condition run hunna so we have to create one extra block for that

    cout << "values : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    if (size == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0; // we are calcuclating nums of record breaking days
    int maxTilli = -1;

    for (int i = 0; i < size; i++)
    {
        if (a[i] > maxTilli && a[i] > a[i + 1])
        {
            // condition satisfies means record breaking day ayo so we have to increase the ans by 1
            cout << "record broken \n";
            ans++;
        }

        maxTilli = max(maxTilli, a[i]);
    }

    cout << ans;

    return 0;
}

// question is called record breaking day calc , it was google kickstart