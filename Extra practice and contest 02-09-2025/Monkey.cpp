#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) 
    {
        stringstream ss(s);

        string word, s2 = "";

        while (ss >> word) 
        {
            s2 += word;
        }
        sort(s2.begin(), s2.end());
        cout << s2 << endl;
    }
    return 0;
}
