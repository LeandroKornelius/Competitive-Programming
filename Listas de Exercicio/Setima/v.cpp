#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    cin.tie(NULL);

    int n, m;
    cin >> n >> m; // livros na livraria e quantia de dinheiro

    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int menorDif = INT_MAX;
    pair<int, int> menores;

    for (int i = 0; i < n; i++) {
        int indComp = lower_bound(p.begin(), p.end(), m - p[i]) - p.begin();

        if (indComp < n && indComp != i && p[indComp] == m - p[i]) {
            if (menorDif > abs(p[i] - p[indComp])) {
                menores.first = min(p[i], p[indComp]);
                menores.second = max(p[i], p[indComp]);
                menorDif = abs(p[i] - p[indComp]);
            }
        }
    }

    cout << menores.first << " " << menores.second << endl;

    return 0;
}


