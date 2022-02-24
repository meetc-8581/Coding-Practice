#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(2);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    v.pop_back();

    vector<int> v2(3, 50); // 50 50 50
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;

    // swap(v, v2);
    // cout << "v" << endl;
    // for (auto element : v)
    // {
    //     cout << element << " ";
    // }
    // cout << endl;

    // cout << "v2" << endl;
    // for (auto element : v2)
    // {
    //     cout << element << " ";
    // }
    // cout << endl;

    sort(v.begin(), v.end());

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}