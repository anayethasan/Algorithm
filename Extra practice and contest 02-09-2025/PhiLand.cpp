#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  

    if (s[0] >= 'A' && s[0] <= 'Z') 
    {
        s[0] = s[0] + ('a' - 'A'); 
    }

    
    int len = s.length();
    for (int i = 0; i < len / 2; i++) 
    {
        swap(s[i], s[len - i - 1]);
    }

    cout << s << endl;

    return 0;
}
