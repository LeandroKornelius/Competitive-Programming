#include<bits/stdc++.h>
using namespace std;
 
#define ll long long

// Returns the size of the smaller string
int minChars(string s1, string s2) {
    int menorLen;
        if (s1.size() > s2.size()) {
            menorLen = s2.size();
        } else {
            menorLen = s1.size();
        }
    return menorLen;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        int segundos = 0;
        int iguais = 0;
        int smaller = minChars(s1, s2);

        // Checks how many chars in the beginning are equal
        for (int j = 0; j < smaller; j++) {
            if (s1[j] == s2[j]) {
                iguais++;
            } else {
                break;
            }
        }

        if (iguais > 0) {
            // Time to add chars that are equal and the copy time
            segundos += iguais + 1;
        }

        // Time to add chars that arent common in both strings
        segundos += s1.size() - iguais;
        segundos += s2.size() - iguais;

        cout << segundos << endl;
    }
    
    return 0;
}