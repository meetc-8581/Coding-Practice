#include <iostream>
#include <vector>

using namespace std;

// class graph
// {

// };

int main()
{
    int n, m;
    cout << "Enter Number of Nodes_Edges" << endl;
    cin >> n >> m;

    vector<vector<int>> adjMatrix((n + 1), vector<int>(n + 1, 0));
    cout << "Enter pairs of nodes" << endl;
    // input and assign in matrix
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adjMatrix[x][y] = 1;
        adjMatrix[y][x] = 1;
    }
    cout << endl;

    cout << "Adjencency Matrix" << endl;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;

    cin >> n >> m;
    vector<int> adjList[500];

    // input and assign in list
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    cout << endl;

    cout << "Adjencency List  " << endl;
    for (int i = 1; i < n + 1; i++)
    {
        cout << i << " -> ";
        for (int x : adjList[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

// sample input
// 7 7
// 1 2
// 1 3
// 2 4
// 2 5
// 2 6
// 2 7
// 7 3