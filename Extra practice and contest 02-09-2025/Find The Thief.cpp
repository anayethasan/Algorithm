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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for(auto it : mp)
        {
            if(it.second % 2 == 1)
            {
                cout << it.first << endl;
                break;
            }
        }
    }


    return 0;
}