#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    cout << "Inverted half pyramid" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    /*
    Inverted half pyramid
    *****
    ****
    ***
    **
    *
    */

    cout << "Half pyramid rotated 180 degree" << endl;

    /*
    Half pyramid rotated 180 degree
        *
       **
      ***
     ****
    *****
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Half pyramid using numbers" << endl;

    /*
    Half pyramid using numbers
    1
    22
    333
    4444
    55555
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    cout << "Floyd's Triangle" << endl;

    /*
    Floyd's Triangle
    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14  15 

    */
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << c << "  ";
            c++;
        }
        cout << endl;
    }

    cout << "Butterfly pattern" << endl;

    /*
    Butterfly pattern

    */
    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (2 * (n - i - 1)); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = (n - i); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
