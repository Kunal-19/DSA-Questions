#include <stdc++.h>
using namespace std;

/*
T.C: O(M + N)
S.C: O(1)
*/

void display(int v[][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

bool findElement(int arr[][5], int target)
{

    int col = 5 - 1, row = 0;

    while (col >= 0 && row < 5)
    {
        if (arr[row][col] == target)
            return true;
        else if (arr[row][col] > target)
            col--;
        else
            row++;
    }
    return false;
}

int main()
{
    // Elements are in sorted in row and col... But last element in row may be smaller than next row first element...

    int arr[][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    display(arr);

    cout << findElement(arr, 4) << endl;
    cout << findElement(arr, 51) << endl;

    return 0;
}