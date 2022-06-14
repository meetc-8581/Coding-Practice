#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int i = digits.size() - 1;
    if (digits[i] == 9)
    {
        // cout << " i - " << i << endl;
        if (i == 0)
        {
            // cout << "return point" << endl;
            return vector<int>{1, 0};
        }

        vector<int> slice(digits.begin(), digits.end() - 1);
        // for (auto &s : slice)
        // {
        //     cout << s << " ";
        // }
        // cout << endl;

        vector<int> digits = plusOne(slice);
        // cout << " i2 - " << i << endl;
        // for (auto &s : digits)
        // {
        //     cout << s << " ";
        // }
        // cout << endl;
        digits.insert(digits.end(), 0);

        // cout << "result" << i << endl;
        // for (auto &s : digits)
        // {
        //     cout << s << " ";
        // }
        // cout << endl;

        return digits;
    }
    else
    {
        digits[i] = digits[i] + 1;
    }

    return digits;
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

    vector<int> s = plusOne(nums);
    for (auto &it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}