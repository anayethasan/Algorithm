#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while(q--)
    {
        int x, y;
        cin >> x >> y;

        if(((x + 1 - y) % 9 == 0) && ((x + 1 - y) >= 0))
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
 
    return 0;
}