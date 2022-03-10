#include <iostream>
#include <vector>

using namespace std;

int maxSum(vector<int> &nums)
{
    int sum = 0, max = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (max < sum)
            max = sum;

        if (sum <= 0)
            sum = 0;
    }

    return max;
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

    int sum = maxSum(nums);

    cout << sum << endl;

    return 0;
}