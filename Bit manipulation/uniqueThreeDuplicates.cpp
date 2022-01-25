#include <iostream>

using namespace std;
int getBit(int n, int pos)
{
    return ((1 << pos) & n) != 0;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < sizeof(arr[0]) * 8; i++) // iterate through each bit
    {
        int sum = 0;                // number of "1" bits in the array elements at ith bit
        for (int j = 0; j < n; j++) // iterate through array elements
        {
            if (getBit(arr[j], i) == 1) // if
            {
                sum++;
            }
        }
        if (sum % 3 != 0) // if number multiple of 3 then 0 otherwise 1
        {
            ans = setBit(ans, i);
        }
    }
    return ans;
}

int main()
{
    // assumption - all numbers except two are present thrice
    int arr[10] = {1, 3, 2, 3, 4, 2, 1, 1, 3, 2};

    int ans = unique(arr, 10);
    // print bit by bit
    for (int i = 0; i < 32; i++)
    {
        cout << getBit(ans, i);
    }
    cout << endl;

    cout << ans << endl;

    return 0;
}