#include<bits/stdc++.h>
using namespace std;

long long x;
bool reach(long long n)
{
    if(n>x) 
        return false;

    if(n==x) 
        return true;

    bool mul1 = reach(n * 10);
    bool mul2 = reach(n * 20);

    return mul1 || mul2;
    
}

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        cin >> x;
        if(reach(1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;    
    }
 
    return 0;
}

