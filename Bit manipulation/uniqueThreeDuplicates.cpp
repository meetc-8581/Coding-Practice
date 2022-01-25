#include <iostream>

using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int unique(int arr[], int n)
{
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i) == 1)
            {
                sum++;
            }
        }
    }
}

int main()
{
    // assumption - all numbers except two are present twice
    int arr[8] = {2, 4, 6, 3, 7, 4, 6, 2};
    unique(arr, 8);
    return 0;
}