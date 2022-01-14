#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size;
    while (s <= e)
    {
        int mid = ((s + e) / 2);
        cout << mid << endl;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[7] = {10, 15, 8, 1, 6, 47, 3};

    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;

    int key;

    cin >> key;

    int index = binarySearch(arr, 7, key);

    cout << index << endl;
}