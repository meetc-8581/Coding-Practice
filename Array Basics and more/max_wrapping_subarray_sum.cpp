#include <iostream>
#include <climits>

using namespace std;

int kadanes(int arr[], int n)
{
    cout << "kadane algo amswer = ";

    int maxsum = INT_MIN;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        curr = (curr < 0) ? 0 : curr;
        maxsum = max(curr, maxsum);
    }

    cout << maxsum << endl;
    return maxsum;
}

int main()
{

    int arr[7] = {4, -4, 6, -6, 10, -11, 12};

    int maxNoWrap = kadanes(arr, 7);

    int totalSum = 0;
    for (int i = 0; i < 7; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    int maxWrap = totalSum + kadanes(arr, 7);

    cout << "Wrap sum = " << max(maxWrap, maxNoWrap) << endl;
}