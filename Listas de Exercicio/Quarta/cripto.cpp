#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, c, aux;
    cin >> n >> m >> c;
    
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        a.push_back(aux);
    }

    for (int i = 0; i < m; i++) {
        cin >> aux;
        b.push_back(aux);
    }

    ll etapas = 0;
    while (etapas < (n - m + 1)) {
        for(int i = 0; i < m; i++) {
            a[etapas + i] = (a[etapas + i] + b[i]) % c;
        }
        etapas++;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

