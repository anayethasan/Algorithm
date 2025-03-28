#include<bits/stdc++.h>
using namespace std;

void Differnce() 
{
    int n;
    cin >> n;
    
    unordered_map<int, int> freq;
    
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    int cnt = 0;
    
    for (auto it : freq) 
    {
        if (it.second % 2 != 0)
        {
            cnt++;  
        }
    }
    if (cnt == 0) 
        cnt = 1;
    
    cout << cnt << endl;
}

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        Differnce();
    }
    
    return 0;
}