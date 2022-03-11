#include <iostream>
#include <vector>
#include <map>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    // map<int, int> h;
    // for (auto i : nums)
    // {
    //     h[i]++;
    // }

    // for (auto i : h)
    // {
    //     cout << i << endl;
    // }
    // cout << h[9] << endl;

    int s = nums[0];
    int f = nums[0];

    do
    {
        s = nums[s];
        f = nums[nums[f]];
    } while (s != f);

    f = nums[0];

    while (s != f)
    {
        s = nums[s];
        f = nums[f];
    }

    return f;
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

    cout << findDuplicate(nums) << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
    return 0;
}