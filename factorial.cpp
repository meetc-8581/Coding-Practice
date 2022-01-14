#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n != 0)
    {
        cout << n << endl;
        return n * factorial(n - 1);
    }
    return 1;
}

int main()
{
    int n;

    cin >> n;

    int fc = factorial(n);
    cout << fc << endl;
}