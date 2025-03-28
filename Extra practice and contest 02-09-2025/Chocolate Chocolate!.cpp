#include <bits/stdc++.h>
using namespace std;

int countChocolates(int total) {
    if (total < 3) 
        return 0;
        
    int newTotal = total / 3;
    int oldTotal = total % 3; 

    return newTotal + countChocolates(newTotal + oldTotal);
}

int main() {
    int q;
    cin >> q; 

    while (q--) {
        int n;
        cin >> n; 

        int total= n / 5; 
        total += countChocolates(total); 

        cout << total << endl;
    }

    return 0;
}
