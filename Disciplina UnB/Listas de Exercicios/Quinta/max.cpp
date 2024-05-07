#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x;
    cin >> x;

    ll prov = x;
    ll tamBin = 0;
    while (prov != 0) {
        prov = prov >> 1;
        tamBin++;
    }

    ll max = 1;
    for (int i = 0; i < tamBin; i++) {
        max = max << 1;
    }
    max--;

    cout << x << " " << (max ^ x) << endl;

    return 0;
}