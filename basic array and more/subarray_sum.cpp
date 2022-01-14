#include <bits/stdc++.h>

using namespace std;

int main()
{

    // int arr[7] = {10, 15, 8, 1, 6, 47, 3};

    int arr[5] = {1, 2, 0, 7, 2};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << "i = " << i << "j = " << j << " -> " << arr[i] + arr[j] << endl;
        }
    }
}