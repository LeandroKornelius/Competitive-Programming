#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r, m, p;
    cin >> n >> r >> m >> p;

    if (n * p >= m * r) cout << "Enganacao";
    else cout << "Promocao";

    return 0;
}