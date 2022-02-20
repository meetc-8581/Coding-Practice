#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r)
{

       int n1 = m - l + 1;
    int n2 = r - m;

    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[i + l];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[i + m + 1];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {

        if (arr1[k] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = arr1[j];
        j++;
        k++;
    }
}

void mergSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;

        mergSort(arr, l, m);
        mergSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    mergSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}