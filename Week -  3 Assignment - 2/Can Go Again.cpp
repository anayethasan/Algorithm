#include <bits/stdc++.h>
using namespace std;

class edge {
public:
    int a, b;
    long long c;
    edge(int a, int b, long long c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<edge> edge_list;
long long dis[1005];
int n, e;

bool bellman_ford(int src) 
{
    dis[src] = 0;

    for (int i = 1; i < n -1 ; i++) 
    {
        for (auto ed : edge_list) 
        {
            int a, b;
            long long c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b]) 
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    
    for (auto edge : edge_list) 
    {
        for (auto ed : edge_list) 
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b]) 
            {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edge_list.push_back(edge(a, b, c));
    }
    for (int i = 1; i < 1005; i++) 
    {
        dis[i] = LLONG_MAX;
    }

    int src;
    cin >> src;
    if (!bellman_ford(src)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        
        if (dis[x] == LLONG_MAX) 
        {
            cout << "Not Possible" << endl;
        } 
        else 
        {
            cout << dis[x] << endl;
        }
    }

    return 0;
}

