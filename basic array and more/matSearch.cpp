#include <iostream>

using namespace std;

int main()
{
    // sorted matrix
    int arr[4][4] = {{1, 4, 7, 11},
                     {2, 5, 8, 12},
                     {3, 6, 9, 16},
                     {10, 13, 14, 17}};

    int r = 0, c = 3;

    int k = 16;

    bool found = false;

    while (r < 4 && c >= 0)
    {
        if (k == arr[r][c])
        {
            found = true;
            break;
        }
        else if (arr[r][c] > k)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << r << " " << c << endl;
    }
    else
    {
        cout << found << endl;
    }
}