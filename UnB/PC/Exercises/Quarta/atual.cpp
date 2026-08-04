#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tam, trios;
    cin >> tam >> trios;

    vector<ll> delta(tam + 2, 0);
    vector<ll> result;

    for (int i = 0; i < trios; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        l--;
        r--;
        delta[l] += x;
        delta[r + 1] -= x;
    }

    result.push_back(delta[0]);
    for (int i = 1; i < tam; i++) {
        result.push_back(result[i - 1] + delta[i]);
    }

    for (int i = 0; i < tam; i++) {
        cout << result[i] << " ";
    }
    
    
    return 0;
}