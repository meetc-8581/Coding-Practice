#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int dominantIndex(vector<int> &nums)
{
    int max = *max_element(nums.begin(), nums.end());
    auto it = find(nums.begin(), nums.end(), max);

    int maxIndex = -1;
    if (it != nums.end())
    {
        maxIndex = it - nums.begin();
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == maxIndex)
        {
            continue;
        }
        else if (2 * nums[i] > max)
        {
            return -1;
        }
    }
    return maxIndex;
}

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int s = dominantIndex(nums);
    cout << s << endl;
    return 0;
}