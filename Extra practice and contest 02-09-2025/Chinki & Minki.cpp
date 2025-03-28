#include <bits/stdc++.h>
using namespace std;

int minDifference(vector<int> &coin, int n, int idx, int sum, int cnt, int total, int dif) 
{
    if (idx == n) 
    {
        if (cnt == dif) 
            return abs(2 * sum - total); 

        return INT_MAX; 
    }

    int chinki = minDifference(coin, n, idx + 1, sum + coin[idx], cnt + 1, total, dif);
    int minki = minDifference(coin, n, idx + 1, sum, cnt, total, dif);

    return min(chinki, minki); 
}

int main()
{
    int q;
    cin >> q;
    while (q--) 
    {
        int n;
        cin >> n;
        vector<int> coin(n);
        int total = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> coin[i];
            total += coin[i];
        }

        int dif = n / 2; 
        cout << minDifference(coin, n, 0, 0, 0, total, dif) << endl; 
    }
    return 0;
}
