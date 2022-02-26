#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int N = 1e5 + 2;
vector<int> adj[N];
vector<bool> vis(N, 0);

int main()
{
    int n, m;
    cout << "Nodes and Edges" << endl;
    cin >> n >> m;

    cout << "Enter pairs of nodes" << endl;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;

    q.push(1);
    vis[1] = 1;

    while (!q.empty())
    {
        int node = q.front();

        q.pop();
        cout << node << endl;

        for (int x : adj[node])
        {
            if (!vis[x])
            {

                vis[x] = 1;
                q.push(x);
            }
        }
    }

    return 0;
}