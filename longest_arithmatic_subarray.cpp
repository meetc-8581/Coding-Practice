#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;

    cin >> size;

    int arr[size];
    //input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // //output array
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    int pd = arr[1] - arr[0], curr = 2, ans = 2;

    for (int i = 2; i < size; i++)
    {
        if (pd == arr[i] - arr[i - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            curr = 2;
        }
        ans = (curr > ans) ? curr : ans;
    }

    cout << ans << endl;
}