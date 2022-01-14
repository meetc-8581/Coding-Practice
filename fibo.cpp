#include <iostream>
using namespace std;

// int fibo(int n)
// {

//     cout << n << endl;

//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     return fibo(n - 1) + fibo(n - 2);
// }

int fib(int n)
{

    int p = 0, q = 1, r;
    if (n == 0)
    {
        return p;
    }
    for (int i = 2; i <= n; i++)
    {
        r = p + q;
        p = q;
        q = r;
        cout << q << endl;
    }

    return q;
}
int main()
{
    int n;

    cin >> n;

    cout << "hello " << fib(n) << endl;
}