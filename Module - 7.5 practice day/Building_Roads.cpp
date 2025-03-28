#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
int vis[100005];

vector<int> compo;

void dfs(int src)
{
    vis[src] = true;
    for(auto child : adj_list[src])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    for (int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            compo.push_back(i);
            dfs(i);
        }
    }
    
    cout << compo.size() - 1 << endl;

    for(int i = 1; i < compo.size(); i++)
    {
        cout << compo[i] - 1 << " " << compo[i] << endl;
    }
 
    return 0;
}