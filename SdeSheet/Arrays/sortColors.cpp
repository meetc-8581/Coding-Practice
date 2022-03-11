#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    for (auto i : nums)
    {

        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
            continue;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
            continue;
        }
        mid++;
    }
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

    sortColors(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}