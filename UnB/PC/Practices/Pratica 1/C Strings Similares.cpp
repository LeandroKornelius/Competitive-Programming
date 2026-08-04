#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        string s;
        cin >> n >> s;
        vector<string> combs;

        // Insere todas substrings conforme solicitado
        for (int j = 0; j < (2 * n - 1); j++) {
            combs.push_back(s.substr(j, n));
        }

        // A partir das substrigs preciso encontrar uma string similar comum a todas
        string similar(n, ' ');
        for (int j = 0; j < n; j++) {
            similar[j] = combs[j][j];
        }

        cout << similar << endl;
    }

    return 0;
}