#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int max = (a > b) ? a : b;
    int min = (b < a) ? b : a;
    int temp = INT_MAX;
    while (temp != 0)
    {
        temp = max % min;
        max = min;
        min = temp;
    }
    return max;
}

int main()
{
    int a, b;
    cout << "Enter 2 numbers " << endl;

    cin >> a;
    cin >> b;

    cout << "GCD = " << gcd(a, b) << endl;
}