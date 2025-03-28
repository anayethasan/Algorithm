#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int mexi = 0;
        int flag = 1;
        for (int i = 0; i < n; i += 2)
        {
            if(max(mexi, arr[i]) !=  max(mexi, arr[i + 1]))
            {
                flag = 0;
                break;
            }
            mexi = max(mexi, arr[i]) + 1;
        }
        
        
        if(flag)
            cout << "Yes" << endl;
        else
            cout <<"No" << endl;     
    }
 
    return 0;
}