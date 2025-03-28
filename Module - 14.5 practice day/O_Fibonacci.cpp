#include <bits/stdc++.h>
using namespace std;

long long dp[50];

long long fibo(int n)
{
    if (n == 1)
        return 0;
    if(n == 2)
        return 1;

    if (dp[n] != -1)
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

// #include<bits/stdc++.h>
// using namespace std;

// long long fibo(int n)
// {
//     double sqrt5 = sqrt(5);
//     double prev1 = (1 + sqrt5) / 2;
//     double prev2 = (1 - sqrt5) / 2;

//     return round((pow(prev1, n) - pow(prev2, n)) / sqrt5);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << fibo(n) << endl;

//     return 0;
// }
