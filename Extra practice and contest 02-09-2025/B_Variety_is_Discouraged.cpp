#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    vector<int> freq(n + 1);
    for(int x : arr)
    {
        freq[x]++;
    }

    vector<int> len(n + 1);
    len[0] = freq[arr[0]] == 1;
    for (int i = 1; i < n; i++)
    {
        if(freq[arr[i]] == 1)
        {
            len[i] = len[i - 1] + 1;
        }
    }

    int mx = *max_element(len.begin(), len.end());
    if(mx == 0)
    {
        cout << "0" << endl;
        return;
    }
    

    for (int i = 0; i < n; i++)
    {
        if(len[i] == mx)
        {
            cout << i - len[i] + 2 << " " << i + 1 << endl;
            return;
        }
    }
    
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }
 
    return 0;
}