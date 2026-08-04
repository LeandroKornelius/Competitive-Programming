#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int> ports;

    for (int i = 1; i < n; i++) {
        int aux;
        cin >> aux;
        ports.push_back(aux);
    }

    int ind = 1;
    bool cond = false;

    while (true) {
        if (ind == m) {
            cond = true;
            break;
        } else if (ind > m) {
            break;
        } else {
            ind = ind + ports[ind - 1];
        }
    }

    if (cond) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}