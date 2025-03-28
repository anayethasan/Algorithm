#include<bits/stdc++.h>
using namespace std;

int par[10005];
int group_size[10005];

int find(int node)
{
    if(par[node] == -1)
        return node;

    int leader1 = find(par[node]);
    par[node] = leader1;
    return leader1;    
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(group_size[leader1] > group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
    
    int e = n-1;
    vector<pair<int, int>> rem;
    while(e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);
        if(leaderA == leaderB)
        {
            rem.push_back({a, b});
        }
        else
        {
            dsu_union(a, b);
        }
    }
    vector<pair<int, int>> cre;
    for (int i = 2; i <= n; i++)
    {
        int leader1 = find(1);
        int leader2 = find(i);
        if(leader1 != leader2)
        {
            cre.push_back({1, i});
            dsu_union(1, i);
        }
    }
    
    cout << cre.size() << endl;
    for (int i = 0; i < rem.size(); i++)
    {
        cout << rem[i].first << " " << rem[i].second << " " << cre[i].first << " " << cre[i].second << endl;
    }
    
 
    return 0;
}