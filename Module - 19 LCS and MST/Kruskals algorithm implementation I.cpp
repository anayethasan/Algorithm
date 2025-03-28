#include<bits/stdc++.h>
using namespace std;

class edge
{
    public:
    int a, b, c;
    edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

bool cmp(edge l, edge r)
{
    return l.c < r.c;
}

int par[1005];
int group_size[1005];

int find(int node)
{
    if(par[node] == -1)
        return node;

    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(group_size[leader1] >= group_size[leader2])
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
    memset(par, -1, sizeof(par));
    memset(group_size, -1, sizeof(group_size));

    ios::sync_with_stdio(0), cin.tie(0);
    vector<edge> edge_list;
    int n,  q;
    cin >> n >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(edge(a, b, c));
    }
    sort(edge_list.begin(), edge_list.end(), cmp);

    int total_cost = 0;    
    for(auto ed : edge_list)
    {
        int parA = find(ed.a);
        int parB = find(ed.b);

        if(parA != parB)
        {
            dsu_union(ed.a, ed.b);
            total_cost += ed.c;
        }
    }

    cout << total_cost << endl;

    return 0;
}