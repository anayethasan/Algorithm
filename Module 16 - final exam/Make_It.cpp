#include<bits/stdc++.h>
using namespace std;

int dp[100005];

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < 100005; i++)
    {
        dp[i] = false;
    }
    dp[1] = true;
    for (int i = 1; i < 100005; i++)
    {
        if(dp[i] == true)
        {
            if(i + 3 <= 100005)
                dp[i + 3] = true;
            if(i * 2 <= 100005)
                dp[i * 2] = true;    
        }
    }
    
    while (q--)
    {
        int n;
        cin >> n;
        
        if(dp[n])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;    
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int dp[100005]; 

// bool canReach(int n) 
// {
//     if (n == 1) 
//         return true; 
//     if (n < 1) 
//         return false; 
//     if (dp[n] != -1)
//          return dp[n]; 

//     bool bySubtracting3 = false, byDividing2 = false;

//     if (n >= 3) {
//         bySubtracting3 = canReach(n - 3);
//     }
//     if (n % 2 == 0) {
//         byDividing2 = canReach(n / 2);
//     }

//     dp[n] = (bySubtracting3 || byDividing2);
//     return dp[n];
// }

// int main() {
//     int q;
//     cin >> q;

//     memset(dp, -1, sizeof(dp)); 

//     while (q--) {
//         int n;
//         cin >> n;
//         if (canReach(n)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
