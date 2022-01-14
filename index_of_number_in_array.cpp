#include <iostream>

using namespace std;

int index(int a[], int size, int n)
{
    if (size == 0)
    {
        return -1;
    }

    if (a[0] == n)
    {
        return 0;
    }

    int j = index(a + 1, size - 1, n);

    return (j == -1) ? -1 : j + 1;
}

int index_reverse(int a[], int size, int n)
{
    if (size == 0)
    {
        return -1;
    }

    int j = index_reverse(a, size - 1, n);

    if (a[size - 1] == n)
    {
        return size - 1;
    }

    return (j == -1) ? -1 : j;
}

int main()
{
    int arr[5] = {5, 5, 6, 5, 6};
    int n;

    cout << "enter N" << endl;
    cin >> n;

    int i = index(arr, 5, n);

    cout << "Number from FRONT index is " << i << endl;

    i = index_reverse(arr, 5, n);

    cout << "Number from BACK index is " << i << endl;
}
