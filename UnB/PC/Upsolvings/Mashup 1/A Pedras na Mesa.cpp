#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    int counter = 0;
    
    string s = "A";
    int lastInd = 0;
    for (int i = 0; i < n; i++) {
        char aux;
        cin >> aux;
        if (s[lastInd] == aux) {
            counter++;
        } else {
            s += aux;
            lastInd++;
        }
    }

    cout << counter << endl;

    return 0;
}