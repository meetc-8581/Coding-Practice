#include <iostream>
using namespace std;

bool is_sorted(int a[], int size)
{
    if (size == 1 || size == 0)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }

    bool isSorted = is_sorted(a + 1, size - 1);
    return isSorted;
}

void test(int a[], int size)
{
    for (int i = 0; i <= size; i++)
        cout << a[i] << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    test(arr + 1, 4);

    cout << is_sorted(arr, 5) << endl;
}