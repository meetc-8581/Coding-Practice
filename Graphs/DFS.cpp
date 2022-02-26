#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 1e5 + 2;
vector<int> adj[N];
bool vis[N];
void dfs(int node)
{
    // preorder
    vis[node] = 1;
    cout << node << " ";

    // in order
    for (int x : adj[node])
    {
        if (!vis[x])
        {
            dfs(x);
        }
    }

    // postorder
}

int main()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }

    int n, m;
    cout << "Enter Number of Nodes_Edges" << endl;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
    cout << endl;

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