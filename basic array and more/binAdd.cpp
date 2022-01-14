#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{

    int ans = 0;

    int base = 1;
    while (base <= n)
    {
        base *= 2;
    }
    base /= 2;
    while (base > 0)
    {
        int lastDigit = n / base;

        n -= (lastDigit * base);
        ans = ans * 10 + lastDigit;
        base /= 2;
    }
    return ans;
}

int add(int a, int b)
{
    cout << a << endl;
    cout << b << endl;

    string x = to_string(a), y = to_string(b);

    string ans = "";
    char carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    for (i)
        return 0;
}

int main()
{
    int a, b;

    cin >> a >> b;

    int sum = add(decimalToBinary(a), decimalToBinary(b));

    cout << sum << endl;
}
