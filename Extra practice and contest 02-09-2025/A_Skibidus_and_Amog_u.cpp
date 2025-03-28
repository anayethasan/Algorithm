#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        string s;
        cin >> s;
        int n = s.size();
        s.erase(n - 2);
        s += "i";
        cout << s << endl;
    }
 
    return 0;
}