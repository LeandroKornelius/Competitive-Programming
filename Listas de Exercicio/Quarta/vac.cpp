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
    vector<ll> ops(tam + 2, 0);
    vector<int> pop;
    vector<ll> result;
    vector<ll> opsResult;

    for (int i = 0; i < tam; i++) {
        int prov;
        cin >> prov;
        pop.push_back(prov);
    }

    for (int i = 0; i < trios; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        l--;
        r--;
        delta[l] += x;
        delta[r + 1] -= x;
        ops[l] += 1;
        ops[r + 1] -= 1;
    }

    result.push_back(delta[0]);
    opsResult.push_back(ops[0]);
    for (int i = 1; i < tam; i++) {
        result.push_back(result[i - 1] + delta[i]);
        opsResult.push_back(opsResult[i - 1] + ops[i]);
    }

    int opsFaltam = 0;
    for (int i = 0; i < tam; i++) {
        if (result[i] < pop[i]) {
            opsFaltam += opsResult[i];
        }
    }

    cout << opsFaltam << endl;    
    
    return 0;
}