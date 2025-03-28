#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int n, m;
        int dfs(vector<vector<int>>& grid, int i, int j)
        {
            if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0)
                return 0;
            int sum = grid[i][j];
            grid[i][j] = 0;
    
            sum += dfs(grid, i, j+1);    
            sum += dfs(grid, i, j-1);    
            sum += dfs(grid, i + 1, j);    
            sum += dfs(grid, i - 1, j);  
            return sum;  
        }
        int findMaxFish(vector<vector<int>>& grid) {
            n = grid.size();
            m = grid[0].size();
    
            int maxfish = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if(grid[i][j])
                    {
                        maxfish = max(maxfish, dfs(grid, i, j));
                    }
                }
            }
            return maxfish;
        }
    };