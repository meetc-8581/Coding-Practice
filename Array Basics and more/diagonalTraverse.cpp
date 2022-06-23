#include <iostream>
#include <vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>> &mat)
{
    vector<int> ans;
    // cout << mat[0].size();
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return ans;
}
int main()
{

    int n, m;
    cin >> n;
    cin >> m;
    vector<vector<int>> nums(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> nums[i][j];
        }
    }

    vector<int> s = findDiagonalOrder(nums);
    // cout << s << endl;
    return 0;
}