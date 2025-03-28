#include<bits/stdc++.h>
using namespace std;

char graph[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int n, m;

bool valid(int x , int y)
{
    if(x < 0 || x >= n || y < 0 || y >= m)
        return false;
    else
        return true;    
}

void dfs(int sr, int sc)
{
    vis[sr][sc] = true;
    for (int i = 0; i < 4; i++)
    {
        int child_row = sr + dir[i].first;
        int child_col = sc + dir[i].second;

        if(valid(child_row, child_col) && !vis[child_row][child_col] && graph[child_row][child_col] == '.')
        {
            dfs(child_row, child_col);
        }
    }
    
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
        
    }
    memset(vis, false, sizeof(vis));
    int si , sj;
    cin >> si >> sj;

    int di, dj;
    cin >> di >> dj;

   if(graph[si][sj] == '.')
   {
        dfs(si, sj);
   }

    if(vis[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;    
 
    return 0;
}