// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t; 

//     while (t--) 
//     {
//         int n, m;
//         cin >> n >> m;
        
//         int a[n], b[m];

//         for (int i = 0; i < n; i++) 
//         {
//             cin >> a[i]; 
//         }
//         for (int i = 0; i < m; i++) 
//         {
//             cin >> b[i]; 
//         }

//         for (int i = 0; i < n; i++) 
//         {
//             a[i] = b[0] - a[i]; 
//         }

//         int flag = 0;
//         for (int i = 1; i < n; i++) 
//         {
//             if (a[i] <= a[i + 1]) 
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag) 
//             cout << "YES" << endl;
//         else 
//             cout << "NO" << endl;
//     }

//     return 0;
// }


