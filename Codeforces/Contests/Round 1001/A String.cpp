#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int count = 0; 
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '1') count++;
        }
        cout << count << endl;
    }

    return 0;
}