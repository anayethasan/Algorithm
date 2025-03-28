#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mx_w)
{
    if (i < 0 || mx_w <= 0)
        return 0;

    if (dp[i][mx_w] != -1)
        return dp[i][mx_w];

    if (weight[i] <= mx_w)
    {
        int opt1 = knapsack(i - 1, mx_w - weight[i]) + val[i];
        int opt2 = knapsack(i - 1, mx_w);
        dp[i][mx_w] = max(opt1, opt2);
        return dp[i][mx_w];
    }
    else
    {
        dp[i][mx_w] = knapsack(i - 1, mx_w);
        return dp[i][mx_w];
    }
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n, mx_w;
        cin >> n >> mx_w;

        for (int i = 0; i < n; i++)
            cin >> weight[i];

        for (int i = 0; i < n; i++)
            cin >> val[i];

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= mx_w; j++)
                dp[i][j] = -1;

        cout << knapsack(n - 1, mx_w) << endl;
    }

    return 0;
}