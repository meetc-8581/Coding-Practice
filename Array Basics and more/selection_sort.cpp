#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {10, 15, 8, 1, 6, 47, 3};

    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {

            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}