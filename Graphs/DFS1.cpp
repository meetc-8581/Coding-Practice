#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 1e5 + 2;
vector<int> adj[N];
vector<bool> vis(N, 0);

void dfsrec(int node)
{
    // preorder
    vis[node] = 1;
    cout << node << " ";

    // inorder
    for (int x : adj[node])
    {
        if (!vis[x])
        {
            dfsrec(x);
        }
    }
    // postorder
}

void dfs(int start)
{
    vector<bool> visd(N, 0);
    stack<int> st;
    visd[start] = 1;
    st.push(start);

    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        visd[node] = 1;
        cout << node << " ";

        cout << " visit vector when at " << node << endl;
        for (int i = 1; i <= 7; i++)
        {
            cout << visd[i] << " ";
        }
        cout << endl;

        // cout << endl;

        for (int x : adj[node])
        {
            if (!visd[x])
            {
                st.push(x);
            }
        }
    }
    cout << endl;
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

    for (int i = 1; i <= n; i++)
    {
        cout << i << "->";

        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }

    dfs(1);

    dfsrec(1);
    cout << endl;

    return 0;
}