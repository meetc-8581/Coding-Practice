#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int y = n;
    int sum = 0;

    while (y > 0)
    {
        int lastdigit = y % 10;
        sum += pow(lastdigit, 3);
        y = y / 10;
        cout << y << " " << sum << endl;
    }

    if (sum == n)
    {
        cout << "Armstrong" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }
}