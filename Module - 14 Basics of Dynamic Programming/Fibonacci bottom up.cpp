#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fibo[n+2];
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << fibo[n] << endl;
 
    return 0;
}
 

// #include<bits/stdc++.h>
// using namespace std;

// long long fibonacci(int n) {
//     double sqrt5 = sqrt(5);
//     double phi = (1 + sqrt5) / 2;
//     double psi = (1 - sqrt5) / 2;
    
//     return round((pow(phi, n) - pow(psi, n)) / sqrt5);
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << fibonacci(n) << endl;
//     return 0;
// }
