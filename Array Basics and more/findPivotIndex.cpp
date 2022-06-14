#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    vector<int> sums(nums.size() + 1);
    sums[0] = 0;

    for (int i = 1; i < sums.size(); i++)
    {
        sums[i] = sums[i - 1] + nums[i - 1];
    }

    for (int i = 0; i < sums.size() - 1; i++)
    {
        if (sums[i] == sums[sums.size() - 1] - sums[i] - nums[i])
        {
            return i;
        }
        // cout << sums[i] << " " << sums[sums.size() - 1] - sums[i] - nums[i] << endl;
    }
    cout << endl;

    return -1;
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

    int s = pivotIndex(nums);
    cout << s << endl;
    return 0;
}