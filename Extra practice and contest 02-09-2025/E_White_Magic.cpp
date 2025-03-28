#include <bits/stdc++.h>
 
#define int long long
using namespace std;
 
const int M = 1'000'000'000 + 7;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1), p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = a[i] ^ p[i - 1];
    }
    map<int, int> dp;
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[p[i - 1]] *= 3;
        dp[p[i - 1]] += 2 * dp[p[i]];
        dp[p[i - 1]] %= M;
    }
    int ans = 0;
    for (auto &[_, x] : dp) {
        ans += x;
    }
    ans %= M;
    cout << ans << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}