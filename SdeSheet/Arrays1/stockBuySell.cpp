#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProfit(vector<int> &nums)
{
    int l = 0, min = INT_MAX;
    int profit = 0;
    for (auto i : nums)
    {
        min = (min < i) ? min : i;

        profit = (profit < (i - min)) ? (i - min) : profit;
    }
    return profit;
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

    cout << maxProfit(nums) << endl;

    return 0;
}