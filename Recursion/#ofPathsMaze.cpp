#include <iostream>

using namespace std;

int maze(int n, int i, int j)
{
    if (i == n - 1 || j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    int count = 0;

    count += maze(n, i + 1, j);
    count += maze(n, i, j + 1);

    return count;
}

int main()
{
    int a;

    cin >> a;

    int s = maze(a, 0, 0);

    cout << s << endl;
    return 0;
}