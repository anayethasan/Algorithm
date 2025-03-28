#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int frq[26] = {0};
        
        for (int i = 0; i < s1.size(); i++)
        {
            frq[s1[i] - 'a']++;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            frq[s2[i] - 'a']--;
        }

        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (frq[i] != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
