#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void reverse(vector<int> &nums, int i, int j)
{
    while (i < j)
        swap(nums, i++, j--);
}

void nextPermutation(vector<int> &nums)
{
    if (nums.size() <= 1)
        return;

    // find the first decrease
    int i = nums.size() - 2;
    while (i < nums.size() && nums[i - 1] > nums[i])
        i--;
    // find the forst element greater nums[i] form the bacl
    int j = nums.size() - 1;
    while (i >= 0 && nums[j] < nums[i])
    {
        j--;
    }

    swap(nums, i, j);

    reverse(nums, i + 1, nums.size() - 1);

    return;
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

    nextPermutation(nums);

    int i = 0;
    while (i < nums.size())
    {
        cout << nums[i] << " ";
        i++;
    }

    return 0;
}