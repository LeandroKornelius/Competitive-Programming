#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool canDistribute(vector<int>& c, int mid, int m) {
    ll chocolates = 0;
    for (int i = 0; i < c.size(); i++) {
        chocolates += min(mid, c[i]);
    }
    return chocolates >= (ll)m * mid;
}

int main() {
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> c;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        c.push_back(aux);
    }

    

    return 0;
}
