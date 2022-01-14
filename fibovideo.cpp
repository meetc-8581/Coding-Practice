#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int so1 = fibo(n - 1);
    int so2 = fibo(n - 2);

    return so1 + so2;
}

int main()
{
    cout << fibo(8) << endl;
}