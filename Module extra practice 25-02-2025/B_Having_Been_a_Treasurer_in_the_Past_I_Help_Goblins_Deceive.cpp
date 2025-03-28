#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int minCnt = 0, slacCnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '_')
                slacCnt++;
            else
                minCnt++; 
        }

        
       
        
        // cout << minCnt << " " << slacCnt <<endl;

        if(n < 3 || minCnt < 2)
            cout << 0 << endl;
        else
            cout << (minCnt*(minCnt - slacCnt) / minCnt) << endl;


    }
 
    return 0;
}

