#include <iostream>

using namespace std;

int main()
{

    cout << "enter number" << endl;

    int n;
    cin >> n;
    int *arr = new int(n);

    arr[0] = 2;
    int length = 0;

    for (int i = 3; i <= n; i += 2)
    {
        int j = 1;
        for (j = 1; (j <= length); j++)
        {
            if (arr[j] >= (i / 2))
            {
                j = length + 1;
                break;
            }
            if ((i % arr[j]) == 0)
            {

                break;
            }
        }
        if ((j - 1) == length)
        {
            length++;
            arr[length] = i;
        }
    }
    cout << "Prime number till " << n << " are " << endl;

    for (int k = 0; k <= length; k++)
    {
        cout << arr[k] << endl;
    }
}
