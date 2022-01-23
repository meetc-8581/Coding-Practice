#include <iostream>
#include <climits>

using namespace std;

int main()
{

    // int arr[7] = {10, 15, 8, 1, 6, 47, 3};

    // int arr[5] = {1, 2, 0, 7, 2};
    int arr[4] = {-1, 4, 7, 2};
    int size = 4;
    int max = INT_MIN;

    // nonbrute force approach

    for (int i = 0; i < size; i++)
    {
        int curr = 0;
        for (int j = i; j < size; j++)
        {
            curr += arr[j];
            max = (curr > max) ? curr : max;
            cout << "i = " << i << "j = " << j << " -> " << curr << endl;
        }
    }
    cout << max << endl;

    // kadane algorithm

    cout << "kadane algo amswer = ";

    max = INT_MIN;
    int curr = 0;
    for (int i = 0; i < size; i++)
    {
        curr += arr[i];
        curr = (curr < 0) ? 0 : curr;
        max = (curr > max) ? curr : max;
    }

    cout << max << endl;
}