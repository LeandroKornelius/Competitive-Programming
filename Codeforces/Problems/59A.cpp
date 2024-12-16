#include<bits/stdc++.h>
#include <ctype.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int lower = 0;

    for (char l: s) {
        if (islower(l)) {
            lower++;
        }
    }

    if (lower >= (s.size() - lower)) {
        for (char l: s) {
            putchar(tolower(l));
        }
    } else {
        for (char l: s) {
            putchar(toupper(l));
        }
    }


    return 0;
}