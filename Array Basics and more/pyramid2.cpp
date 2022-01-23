#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    cout << "Inverted number pyramid" << endl;
    /*

    inverted number pyramid

    12345
    1234
    123
    12
    1

    */

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "0-1 pattern" << endl;
    /*
    0-1 pattern
    1
    01
    101 
    0101
    10101
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    cout << "Rhombus pattern" << endl;
    /*
    Rhombus pattern
        *****
       *****
      *****
     *****
    *****
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "Number pyramid pattern" << endl;
    /*
    Number pyramid pattern
        1
       1 2
      1 2 3
     1 2 3 4
    1 2 3 4 5
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "palindromic pattern" << endl;
    /*
    palindromic pattern
            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5


    */
    for (int i = 1; i <= n; i++)
    {

        for (int j = 2 * (n - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << k + 1 << " ";
        }
        cout << endl;
    }
    cout << "star pattern" << endl;
    /*
   star pattern
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

    */

    for (int i = 1; i <= n; i++)
    {

        for (int j = 2 * (n - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*"
                 << " ";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {

        for (int j = 2 * (n - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "*"
                 << " ";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    cout << "zig zag pattern" << endl;
    /*
   zig zag pattern
   */
    int t = 9;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && (j % 4 == 0)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}