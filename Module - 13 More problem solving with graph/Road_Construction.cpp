#include<bits/stdc++.h>
using namespace std;

int par[100000 + 5];
int group_size[100000 + 5];

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
    
}

int find(int node)
{
    if(par[node] == -1)
        return node;
    
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

int mx_gr_sz;

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
        mx_gr_sz = max(mx_gr_sz, group_size[leader1]);
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
        mx_gr_sz = max(mx_gr_sz, group_size[leader2]);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_init(n);

    int component = n;
    mx_gr_sz = 1;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        int par_a = find(a);
        int par_b = find(b);

        if(par_a != par_b)
        {
            dsu_union(a, b);
            component--;
        }
        
        cout << component << " " << mx_gr_sz << endl;
    }

    return 0;
}