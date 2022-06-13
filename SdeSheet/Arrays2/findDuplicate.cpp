#include <iostream>
#include <vector>
#include <map>

using namespace std;

int findDuplicate(vector<int> &nums)
{

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
    return 0;
}