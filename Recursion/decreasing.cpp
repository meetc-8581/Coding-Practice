#include <iostream>
using namespace std;

int decreasing(int n)
{
    if (n != 0)
    {
        cout << n << endl;
        decreasing(n - 1);
        return 0;
    }
    cout << n << endl;

    return 0;
}

int main()
{
    int n;
    cin >> n;
    decreasing(n);
    return 0;
}