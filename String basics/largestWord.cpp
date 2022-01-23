#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();

    int maxlenght = 0, temp = 0, st = 0, end = 0, i = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (temp > maxlenght)
            {
                maxlenght = temp;
                end = st;
            }
            temp = 0;
            st = i + 1;
        }
        else
            temp++;
        if (arr[i] == '\0')
            break;
        i++;
    }

    cout << maxlenght << endl;
    for (int i = 0; i < maxlenght; i++)
    {
        cout << arr[i + end];
    }
    cout << endl;

    return 0;
}