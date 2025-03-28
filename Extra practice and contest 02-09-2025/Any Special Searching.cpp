#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    vector<long long> pre(n); 
    
    cin >> pre[0]; 
    for (int i = 1; i < n; i++) 
    {
        long long num;
        cin >> num;
        pre[i] = pre[i - 1] + num;
    }

    int q;
    cin >> q;
    
    while (q--) 
    {
        long long s;
        cin >> s;
        
        int index = -1; 
        
        
        for (int i = 0; i < n; i++) 
        { 
            if (pre[i] >= s) 
            {
                index = i + 1; 
                break;
            }
        }
        
        cout << index << endl;
    }

    return 0;
}
