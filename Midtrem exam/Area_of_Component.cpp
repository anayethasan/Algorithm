#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;

bool valid(int x, int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m || vis[x][y] || grid[x][y] != '.')
        return false;
    else
        return true;    
}

int dfs(int sr, int sc)
{
    
    vis[sr][sc] = true;
    int sum = 1;
    
    for(int i = 0; i < 4; i++)
    {
        int child_r = sr + dir[i].first;
        int child_l = sc + dir[i].second;
        if(valid(child_r, child_l) && !vis[child_r][child_l] && grid[child_r][child_l] == '.')
        {
            sum += dfs(child_r, child_l);
        }
    }
    
    return sum;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
        
    }
    memset(vis, false, sizeof(vis));

    int min_cmp = INT_MAX;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(grid[i][j] == '.' && !vis[i][j])
            {
                flag = 1;
                min_cmp = min(min_cmp, dfs(i, j));
            }
        }
        
    }
    
    if(flag)
        cout << min_cmp << endl;
    else
        cout << -1 << endl;    
 
    return 0;
}