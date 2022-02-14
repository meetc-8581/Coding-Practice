#include <iostream>

using namespace std;

int countPaths(int s, int e)
{
    cout << "entred function" << endl;
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }

    int count = 0;
    for (int i = 0; i <= 6; i++)
    {
        count += countPaths(s + i, e);
    }
    cout << count << endl;
    return count;
}

int main()
{
    int count = countPaths(1, 4);
    cout << count << endl;
    return 0;
}