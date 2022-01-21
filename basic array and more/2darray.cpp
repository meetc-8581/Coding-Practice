#include <iostream>

using namespace std;

// void spiralOrderTraverse(int arr[][], int size1, int size2, int k)
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    int n = 5, m = 6;
    int arr[5][6] = {{1, 5, 7, 9, 10, 11},
                     {6, 10, 12, 13, 20, 21},
                     {9, 25, 29, 30, 32, 41},
                     {15, 55, 59, 63, 38, 70},
                     {40, 70, 79, 81, 95, 105}};

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int rowS = 0, rowE = n - 1, colS = 0, colE = m - 1;

    while (rowS <= rowE && colS <= colE)
    {
        for (int col = colS; col <= colE; col++)
        {
            cout << arr[rowS][col] << " ";
        }
        cout << endl;
        rowS++;
        for (int row = rowS; row <= rowE; row++)
        {
            cout << arr[row][colE] << " ";
        }
        cout << endl;
        colE--;
        for (int col = colE; col >= colS; col--)
        {
            cout << arr[rowE][col] << " ";
        }
        cout << endl;
        rowE--;
        for (int row = rowE; row >= rowS; row--)
        {
            cout << arr[row][colS] << " ";
        }
        cout << endl;
        colS++;
    }
}