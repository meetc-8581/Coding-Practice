#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builin_popcount(x)

void heapify(vi &a, int n, int i)
{
    int maxIdx = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[maxIdx])
        maxIdx = l;

    if (r < n && a[r] > a[maxIdx])
        maxIdx = r;

    if (maxIdx != i)
    {
        swap(a[i], a[maxIdx]);
        heapify(a, n, maxIdx);
    }
}

void heapsort(vi &a)
{
    int n = a.size();

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{
    vi a = {4, 5, 3, 2, 6, 1};

    heapsort(a);

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
