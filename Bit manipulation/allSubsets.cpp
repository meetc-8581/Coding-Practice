#include <iostream>

using namespace std;

int getSubsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++)
        {

            if (i & (1 << j))
            {
                cout << arr[j] << " ,";
            }
        }
        cout << "}" << endl;
    }
    return 0;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};

    getSubsets(arr, 4);
    return 0;
}