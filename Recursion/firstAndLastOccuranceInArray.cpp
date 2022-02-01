#include <iostream>
using namespace std;

int foccurence(int arr[], int n, int key)
{
    if (n == 0)
        return -1;

    if (arr[0] == key)
        return 0;

    int index = foccurence(arr + 1, n - 1, key);
    return index == -1 ? -1 : index + 1;
}

int lastoccurence(int arr[], int n, int key)
{
    if (n == 0)
        return -1;

    if (arr[n - 1] == key)
        return n - 1;

    int index = lastoccurence(arr, n - 1, key);

    return index == -1 ? -1 : index;
}

int main()
{
    int n = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 4, 8, 9, 10};

    cout << "start - " << foccurence(arr, n, 4) << endl;
    cout << "end - " << lastoccurence(arr, n, 4) << endl;

    return 0;
}