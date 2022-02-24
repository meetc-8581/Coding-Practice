#include <iostream>
#define n 9
using namespace std;

void countSort(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    max++;
    int countArr[n] = {0};
    for (int i = 0; i < 9; i++)
    {
        countArr[arr[i]]++;
    }

    for (int i = 1; i < max; i++)
    {

        countArr[i] += countArr[i - 1];
    }
    int result[n];
    for (int i = n - 1; i >= 0; i--)
    {
        result[--countArr[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = result[i];
    }
}

int main()
{
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    countSort(arr);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}