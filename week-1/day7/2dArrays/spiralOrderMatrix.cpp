#include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
using namespace std;

int main()
{
    system("CLS");

    int row, col;
    cout << "row : ";
    cin >> row;
    cout << "col : ";
    cin >> col;
    int arr[row][col];

    for (int i = 0; i < row; i++)

    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // row = 5;
    // col = 6;
    // int arr[5][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30}};
    int rowStart = 0, colStart = 0, rowEnd = row - 1, colEnd = col - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {

        // for row satart
        for (int col = colStart; col <= colEnd; col++)
        {
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;

        // for col end
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << arr[row][colEnd] << " ";
        }
        colEnd--;

        // for row end
        for (int col = colEnd; col >= colStart; col--)
        {
            cout << arr[rowEnd][col] << " ";
        }
        rowEnd--;

        // for col end
        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << arr[row][colStart] << " ";
        }
        colStart++;
    }

    return 0;
}

// i was trying to print 2d array like arr[1,2] lol . it took me more more than half hour to figure out lol ... also funfact i watched dumb and dumber yesterday lol