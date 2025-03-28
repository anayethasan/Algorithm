#include <bits/stdc++.h>
using namespace std;

int arr[1005];
int dp[1005][1005];

bool subset_sum(int i, int sum)
{
    if (i < 0) // base case
    {
        if (sum == 0)
           return true;
        else
           return false;
    }

    if(dp[i][sum] != -1)
    {
        return dp[i][sum];
    }

    if (arr[i] <= sum)
    {
        bool opt1 = subset_sum(i - 1, sum - arr[i]);
        bool opt2 = subset_sum(i - 1, sum);
        dp[i][sum] =  opt1 || opt2;
        return dp[i][sum];
    }
    else
    {
        dp[i][sum] = subset_sum(i - 1, sum);
        return dp[i][sum];
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = -1;
        }
        
    }
    
    if(subset_sum(n - 1, sum))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;    

    return 0;
}