#include <iostream>

using namespace std;

void primeFactorsSieve(int n)
{
    int *spf = new int[n + 1]();

    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    cout << endl;
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                spf[j] = i;
            }
        }
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << spf[i] << " ";
    // }
    // cout << endl;

    // cout << "prime Factorization" << endl;
    // for (int i = 2; i <= n; i++)
    // {
    //     int n = i;
    cout << n << " = ";
    while (n != 1)
    {
        cout << spf[n] << " * ";
        n = n / spf[n];
    }
    cout << endl;
    // }
}

int main()
{
    int n;
    cin >> n;
    primeFactorsSieve(n);
    return 0;
}