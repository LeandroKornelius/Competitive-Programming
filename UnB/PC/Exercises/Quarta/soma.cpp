#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q, aux;
    cin >> n >> q;

    vector<ll> delta(n + 2, 0);
    vector<ll> freqs;
    vector<ll> v;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        v.push_back(aux);
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        delta[l] += 1;
        delta[r + 1] -= 1;
    }

    freqs.push_back(delta[0]);
    for (int i = 1; i < n; i++) {
        freqs.push_back(freqs[i - 1] + delta[i]);
    }

    sort(freqs.begin(), freqs.end());
    sort(v.begin(), v.end());

    ll total = 0;
    for (int i = 0; i < n; i++) {
        total += freqs[i] * v[i];
    }

    cout << total << endl;    
    
    return 0;
}