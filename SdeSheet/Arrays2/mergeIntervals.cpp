#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> merged;
    if (intervals.empty())
        return merged;

    sort(intervals.begin(), intervals.end());

    vector<int> tempInt = intervals[0];

    for (auto it : intervals)
    {
        if (tempInt[1] >= it[0]) // check if can be merged
        {
            tempInt[1] = max(it[1], tempInt[1]);
        }
        else
        {
            merged.push_back(tempInt);
            tempInt = it;
        }
    }
    merged.push_back(tempInt);
    return merged;
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> merged = mergeIntervals(matrix);

    for (int i = 0; i < merged.size(); i++)
    {
        for (int j = 0; j < merged[0].size(); j++)
        {
            cout << merged[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}