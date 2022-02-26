#include <iostream>
#include <vector>

using namespace std;

const int N = 1e5 + 2;
vector<int> adj[N];
vector<bool> vis(N, 0);

void dfs(int node)
{
    // preorder
    vis[node] = 1;
    cout << node << " ";

    // inorder
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