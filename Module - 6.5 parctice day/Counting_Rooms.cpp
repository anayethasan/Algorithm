#include<bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
bool vis[1005][1005];

int dirX[4] = {0, 0, 1, -1};
int dirY[4] = {1, -1, 0, 0};

bool valid(int x, int y)
{
    return !(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == '#');
}

void dfs(int x, int y)
{
    vis[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int newX = x + dirX[i];
        int newY = y + dirY[i];

        if(valid(newX, newY) && !vis[newX][newY])
            dfs(newX, newY);
    }
    
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
        
    }
    memset(vis, false, sizeof(vis));
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] == '.')
            {
                cnt++;
                dfs(i, j);
            }
        }
        
    }
    
    cout << cnt << endl;
 
    return 0;
}