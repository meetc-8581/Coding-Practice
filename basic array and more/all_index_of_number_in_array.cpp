#include <iostream>

using namespace std;

int index(int a[], int size, int n, int oArr[], int oArrSize)
{
    if (size == 0)
    {
        return 0;
    }

    int oArr[], oArrSize = index(a + 1, size - 1, n, oArr, oArrSize);

    for (int i = 0; i < oArrSize; i++)
    {
        oArr[i]++;
    }

    if (a[0] == n)
    {
        return 0;
    }

    return oArr, oArrSize;
}

int main()
{
    int arr[5] = {5, 5, 6, 5, 6};
    int n;

    cout << "enter N" << endl;
    cin >> n;

    int *oArr = new int[];

    index(arr, 5, n, a, 0);

    for (int i = 0; i < a; i++)
    {
        cout << oArr[i] << endl;
    }

    // cout << "Number from FRONT index is " << i << endl;
}
