#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
int level[105][105];

vector<pair<int, int>> knight = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int sr, int sc)
{
    queue<pair<int, int>> q;
    q.push({sr, sc});
    vis[sr][sc] = true;
    level[sr][sc] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_sr = par.first;
        int par_sc = par.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = par_sr + knight[i].first;
            int cj = par_sc + knight[i].second;
            
            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_sr][par_sc] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        int si, sj;
        cin >> si >> sj;

        int di , dj;
        cin >> di >> dj;
        
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));

        bfs(si, sj);

        cout << level[di][dj] << endl;
    }

    return 0;
}