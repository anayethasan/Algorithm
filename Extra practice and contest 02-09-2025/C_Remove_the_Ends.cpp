#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long maxCoins = 0;
    int i = 0;

    while (i < n) {
        int maxVal = a[i]; 
        
        while (i < n && (a[i] < 0) == (maxVal < 0)) {
            maxVal = max(maxVal, a[i]);
            i++;
        }

        maxCoins += maxVal;
    }

    cout << maxCoins << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
