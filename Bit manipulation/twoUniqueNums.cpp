#include <iostream>

using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n)
{

    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    int tempXor = xorSum;
    int setbit = 0;
    int pos = 0;

    while (setbit != 1)
    {
        setbit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }
    int newXor = 0;

    for (int j = 0; j < n; j++)
    {
        if (setBit(arr[j], pos - 1))
        {
            newXor = newXor ^ arr[j];
        }
    }

    cout << newXor << endl;
    cout << (tempXor ^ newXor) << endl;
}

int main()
{
    // assumption - all numbers except two are present twice
    int arr[8] = {2, 4, 6, 3, 7, 4, 6, 2};
    unique(arr, 8);
    return 0;
}