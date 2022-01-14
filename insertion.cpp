#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[7] = {10, 15, 8, 1, 6, 47, 3};

    for (int i = 0; i < 7; i++)
    {
        for (int j = i; j > 0; j--)
        {

            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else
                break;
        }
        }

    // print the arry
}