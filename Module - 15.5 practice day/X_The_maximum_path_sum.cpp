#include<bits/stdc++.h>
using namespace std;

int mat[50][50];
int dp[50][50];

int knapsack(int n, int m)
{
    if(n < 0 || m < 0)
        return INT_MIN;
    
    if(dp[n][m] != -1)
        return dp[n][m];
        
    if(n == 0 && m == 0)
    {
        return dp[n][m] = mat[n][m];
    }    

    int r = knapsack(n, m - 1);
    int t = knapsack(n - 1, m);

    dp[n][m] = mat[n][m] + max(r, t);
    return dp[n][m];

}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
        
    }
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
        
    }
    
    cout << knapsack(n - 1, m - 1) << endl;
 
    return 0;
}