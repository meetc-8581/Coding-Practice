#include <iostream>

using namespace std;

bool pairSumBrute(int arr[], int size, int k)
{
    // Brute force
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << ", " << j << endl;
                return true;
            }
        }
    }
    return false;
}

bool opPairSum(int arr[], int size, int k)
{
    int low = 0;
    int high = size - 1;
    while (high > low)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << ", " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int k;

    cin >> k;

    bool out = pairSumBrute(arr, 5, k);

    bool opout = opPairSum(arr, 5, k);

    cout << "brute " << out << endl;

    cout << "Optimized " << opout << endl;
}