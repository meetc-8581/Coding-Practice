#include <iostream>

using namespace std;

bool getPalindrome(char arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    char arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getPalindrome(arr, n) << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i];
    // }

    return 0;
}