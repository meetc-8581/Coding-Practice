#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    // print first n rows
    for (int j = 1; j <= n; j++)
    {
        int val = 1;
        for (int i = 0; i < j; i++)
        {
            cout << val << " ";

            val *= (j - i - 1);
            val /= (i + 1);
        }
        cout << endl;
    }
    cout << endl;

    // print the nth row
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        cout << val << " ";
        val *= (n - i - 1);
        val /= (i + 1);
    }
    cout << endl;
    cout << endl;

    // print the element at nth row and mth column

    int num = 1, deno = 1;
    int nt = n - 1;

    for (int i = m - 1; i > 0; i--)
    {
        num *= nt;
        nt--;
        deno *= i;
    }
    cout << num / deno << endl;

    return 0;
}