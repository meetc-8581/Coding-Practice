#include <iostream>
#include <vector>
using namespace std;

string funct(string a)
{
}

int main()
{
    string a;

    string s = funct(a);

    cout << s << endl;
    return 0;
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

    int s = funct(nums);
    cout << s << endl;
    return 0;
}