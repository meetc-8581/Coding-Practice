#include <iostream>

using namespace std;

void primeSieve(int n)
{
    int *arr = new int[n + 1]();

    for (int i = 2; i <= n; i++)
    {

        if (arr[i] != 1)
        {
            for (int j = i * i; j * i <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
            cout << i << " ,";
    }
    cout << endl;
}

int main()
{
    int n;

    cin >> n;

    primeSieve(n);
}