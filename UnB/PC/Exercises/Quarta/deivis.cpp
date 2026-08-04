#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tam, pars, prov;
    vector<int> a;
    vector<ll> psum;

    cin >> tam >> pars;

    for (int i = 0; i < tam; i++) {
        cin >> prov;
        a.push_back(prov);
    }

    psum.push_back(a[0]);
    for (int i = 1; i < tam; i++) {
        psum.push_back(a[i] + psum[i - 1]);
    }

    for (int i = 0; i < pars; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        if (l == 0) {
            cout << psum[r] << endl;
        } else {
            cout << psum[r] - psum[l - 1] << endl;
        }
    }
    
    return 0;
}