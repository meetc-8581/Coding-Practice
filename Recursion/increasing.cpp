#include <iostream>
using namespace std;

int increasing(int n)
{
    if (n == 0)
    {
        cout << n << endl;
        return 0;
    }
    increasing(n - 1);
    cout << n << endl;

    return 0;
}

int main()
{
    int n;
    cin >> n;
    increasing(n);
    return 0;
}