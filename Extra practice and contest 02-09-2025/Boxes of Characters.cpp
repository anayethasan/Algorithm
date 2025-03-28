#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {

    int q;
    cin >> q;
    while (q--) 
    {
        string S;
        cin >> S;

        int vowels = 0, consonants = 0, digits = 0;

        for (char ch : S) 
        {
            if (isVowel(ch)) 
            {
                vowels++;
            } 
            else if (isdigit(ch)) 
            {
                digits++;
            } 
            else 
            {
                consonants++;
            }
        }
        int vowelBoxes = (vowels + 1) / 2; 
        int consonantBoxes = (consonants + 2) / 3;
        int digitBoxes = digits;
        int totalBoxes = max({vowelBoxes, consonantBoxes, digitBoxes});;

        cout << totalBoxes << endl;
    }
    
    return 0;
}
