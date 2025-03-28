#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int, int> parent[1005][1005];

vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;

bool valid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m)
        return false;
    else
        return true;    
}

void bfs(int sr, int sc)
{
    queue<pair<int, int>> q;
    q.push({sr, sc});
    vis[sr][sc] = true;
    level[sr][sc] = 0;

    while(!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + dir[i].first;
            int cj = par_j + dir[i].second;

            if(valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D' || grid[ci][cj] == 'R'))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                parent[ci][cj] = {par_i, par_j};
            }
        }
        
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if(grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
        
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(si, sj);

    if (level[di][dj] == -1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << endl;
        }
        return 0;
    }
    
    while(1)
    {
        pair<int, int> par = parent[di][dj];
        di = par.first;
        dj = par.second;

        if(valid(di, dj) && grid[di][dj] == 'R')
            break;
        
        grid[di][dj] = 'X';    
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    
 
    return 0;
}