class Solution {
    public:
        int n, m;
        bool vis[1005][1005];
        vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    
        bool valid(int i, int j) {
            return (i >= 0 && i < n && j >= 0 && j < m);
        }
    
        void dfs(int si, int sj, vector<vector<int>>& grid) {
            vis[si][sj] = true;
    
            for (int i = 0; i < 4; i++) {
                int ci = si + dir[i].first;
                int cj = sj + dir[i].second;
                if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1) {
                    dfs(ci, cj, grid);
                }
            }
        }
    
        int numEnclaves(vector<vector<int>>& grid) {
            n = grid.size();
            m = grid[0].size();
            memset(vis, false, sizeof(vis));
    
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && grid[i][j] == 1 && !vis[i][j]) {
                        dfs(i, j, grid);
                    }
                }
            }
    
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 1 && !vis[i][j]) {
                        cnt++;
                    }
                }
            }
    
            return cnt;
        }
    };