#include <bits/stdc++.h>
using namespace std;

vector<pair<long long, long long>> adj_list[100005]; 
long long dis[100005];
long long parent[100005];

void dijkstra(int src)
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        long long par_node = pq.top().second;
        long long par_dis = pq.top().first;
        pq.pop();

        for (auto child : adj_list[par_node])
        {
            long long child_node = child.first;
            long long child_dis = child.second;

            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                pq.push({dis[child_node], child_node});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (long long i = 1; i <= e; i++) 
    {
        long long a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (long long i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == LLONG_MAX) 
    {
        cout << -1 << endl;
        return 0;
    }

    vector<long long> path;
    long long node = n;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());
    for (long long x : path)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

