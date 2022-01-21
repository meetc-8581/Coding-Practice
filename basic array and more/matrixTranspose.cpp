#include <iostream>

using namespace std;

int main()
{
    int arr[6][6] = {{1, 5, 7, 9, 10, 11},
                     {6, 10, 12, 13, 20, 21},
                     {9, 25, 29, 30, 32, 41},
                     {15, 55, 59, 63, 38, 70},
                     {40, 70, 79, 81, 95, 105},
                     {10, 20, 30, 40, 50, 60}};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}