#include<bits/stdc++.h>
using namespace std;

void solve(long long n)
{
    if(n < 10)
    {
        cout << n << " ";
        return;
    }    
    solve(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        long long n;
        cin >> n;
        solve(n);
        cout << endl;
    }
 
    return 0;
}