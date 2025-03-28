// #include<bits/stdc++.h>
// using namespace std;

// int solve(string s)
// {
//     stack<char> st;
//     for(auto ch : s)
//     {
//         if(!st.empty() && st.top() == ch)
//             st.pop();
//         else
//             st.push(ch);    
//     }
//     int cnt = st.size();

//     return max(1, cnt);
// }

// int main()
// {
//     int q;
//     cin >> q;
//     while(q--)
//     {
//         string s;
//         cin >> s;

//        cout << solve(s) << endl;
//     }
 
//     return 0;
// }

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
        int flag = 0;
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i + 1])
            {
                flag = 1;
                break;
            }
        }
        
        if(flag)
            cout << 1 << endl;
        else
            cout << s.size() << endl;    
    }
 
    return 0;
}
