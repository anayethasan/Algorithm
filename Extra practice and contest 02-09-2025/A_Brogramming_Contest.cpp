#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    
    while (q--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first_one = -1, last_zero = -1;
        int moves = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && first_one == -1)
                first_one = i;
                
            if (s[i] == '0')
                last_zero = i;
        }

        cout << moves << endl;
    }

    return 0;
}
