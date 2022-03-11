#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void mergeSortedArrays(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    if (nums1.empty())
    {
        nums1 = nums2;
        return;
    }

    if (nums2.empty())
        return;

    int i = 0, j = 0;
    while (i < m)
    {
        if (nums1[i] > nums2[j])
        {
            swap(nums1[i], nums2[j]);
            sort(nums2.begin(), nums2.end());
        }
        i++;
    }
    i = 0;
    while (i < (m + n))
    {
        nums1[m + i] = nums2[i];
        i++;
    }
}
void mergeSortedArraysGap(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    if (nums1.empty())
    {
        nums1 = nums2;
        return;
    }

    if (nums2.empty())
        return;
    int i = 0;
    while (i < (m + n))
    {
        nums1[m + i] = nums2[i];
        i++;
    }
    int gap = ceil((m + n) / 2);
    while (gap >= 1)
    {

        int p = 0, q = gap;
        cout << "start " << gap << " " << p << " " << q << endl;
        while (q < (m + n))
        {
            if (nums1[p] > nums1[q])
                swap(nums1[p], nums1[q]);
            p++;
            q++;
        }
        cout << "end " << gap << " " << p << " " << q << endl;
        gap = ceil(gap / 2);
    }
}

int main()
{
    int m, n;

    cin >> m >> n;

    vector<int> nums1(m + n);
    vector<int> nums2(n);

    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }
    for (int i = m; i < (m + n); i++)
    {
        nums1[i] = 0;
    }

    // mergeSortedArrays(nums1, m, nums2, n);

    // for (int i = 0; i < (m + n); i++)
    // {
    //     cout << nums1[i] << " ";
    // }
    // cout << endl;

    mergeSortedArrays(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}