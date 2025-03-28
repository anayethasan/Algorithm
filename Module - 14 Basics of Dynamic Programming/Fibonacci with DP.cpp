#include<bits/stdc++.h>
using namespace std;

int dp[1105];
int fibo(int n)
{
    if(n < 2)
        return n;

    if(dp[n] != -1)
        return dp[n];

    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fibo(n) << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int dp[1005];

// int fib(int n)
// {
//     if (n < 2)
//         return n;
//     if (dp[n] != -1)
//         return dp[n];

//     dp[n] = fib(n - 1) + fib(n - 2);
//     return dp[n];
// }

// vector<int> fibo(int n)
// {
//     vector<int> fb;
//     for (int i = 0; i <= n; i++)
//         fb.push_back(fib(i));

//     return fb;
// }

// int main()
// {

//     memset(dp, -1, sizeof(dp));
//     int n;
//     cin >> n;

//     vector<int> v = fibo(n);
//     for (auto x : v)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }
