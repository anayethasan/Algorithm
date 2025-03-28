// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int q;
//     cin >> q;

//     while(q--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int mxIdx = 0;
//         int secMxIdx = 0;
//         int maxVal = arr[0];
//         int secVal = arr[0];
//         for (int i = 0; i < n; i++)
//         {
//             if(arr[i] > maxVal)
//             {
//                 secVal = maxVal;
//                 secMxIdx = mxIdx;
//                 maxVal = arr[i];
//                 mxIdx = i;
//             }
//             else if(arr[i] > secVal && arr[i] != maxVal)
//             {
//                 secVal = arr[i];
//                 secMxIdx = i;
//             }
//         }

//         if(mxIdx > secMxIdx)
//             cout << secMxIdx << " " << mxIdx << endl;
//         else
//             cout << mxIdx << " " << secMxIdx << endl;
//     }
 
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int q;
//     cin >> q;
//     while(q--)
//     {
//         int n;
//         cin >> n;
//         priority_queue<pair<int, int>> pq;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             pq.push({x, i});
//         }
        
//         pair<int, int> mx1 = pq.top();
//         pq.pop();

//         pair<int, int> mx2 = pq.top();
//         pq.pop();

//         if(mx1.second > mx2.second)
//            cout << mx2.second << " " << mx1.second << endl;
//         else        
//             cout << mx1.second << " " << mx2.second << endl;
//     }

//     return 0;
// }

