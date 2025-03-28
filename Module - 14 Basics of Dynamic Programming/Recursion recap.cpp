// #include<bits/stdc++.h>
// using namespace std;

// void rec(int n)
// {
//     if(n > 5)
//         return;
//     cout << n << endl; 
//     rec(n+1);   
// }

// int main()
// {
//     rec(1);
 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int rec(int n)
{
    if(n < 1)
        return 0;
    int sum = rec(n - 1);
    return sum + n;    
}

int main()
{
    cout << rec(5) << endl;
 
    return 0;
}