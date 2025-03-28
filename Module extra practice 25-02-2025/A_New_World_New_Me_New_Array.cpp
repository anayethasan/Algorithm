#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, k, p;
    cin >> n >> k >> p;

    int maxSum = n * p;
    int minSum = -n * p;

    if (k > maxSum || k < minSum) {
        cout << -1 << endl; 
        return;
    }
    

    cout << (abs(k) + p - 1) / p << endl; 
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
