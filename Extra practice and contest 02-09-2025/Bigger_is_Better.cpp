// #include <iostream>
// #include <string>
// using namespace std;

// void Bigger_is_Better() 
// {
//     int N;
//     string s1;
//     cin >> N >> s1;

//     string s2 = s1;  

//     for (int i = N - 1; i >= 0; i--) 
//     {
//         if (s2[i] < 'z') 
//         {  
//             s2[i]++; 
//             break;
//         }
//     }

//     if (s2 > s1 && string(s2.rbegin(), s2.rend()) > s1) 
//     {
//         cout << s2 << endl;
//     } 
//     else 
//     {
//         cout << "-1" << endl;
//     }
// }

// int main() {
//     int q;
//     cin >> q;
//     while (q--) 
//     {
//         Bigger_is_Better();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    bool flag=0;
	   // if(a=string(n,'z')){
	   //     cout<<-1;
	   //     continue;
	   // }
	    string res=a;
	    // laxo string making 
	    for(int i=n-1;i>0;i--){
	        if(res[i]!='z'){
	            flag=1;
	            break;
	        }
	        
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	    else {
	        for(int i=0;i<n;i++){
	            cout<<'z';
	        }
	        cout<<endl;
	    }
	 
	}

}