#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {10, 15, 8, 1, 6, 47, 3};

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}