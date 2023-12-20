#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    cin.tie(NULL);

    int n, m;
    cin >> n >> m; /// livros na livraria e qnt money

    vector<int> p;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        p.push_back(aux);
    }

    int menorDif = INT_MAX;
    pair<int, int> menores;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (p[i] + p[j] == m) {
                    if (menorDif > abs(p[i] - p[j])) {
                        if (p[i] <= p[j]) {
                            menores.first = p[i];
                            menores.second = p[j];
                        } else {
                            menores.first = p[j];
                            menores.second = p[i];
                        }
                        menorDif = abs(p[i] - p[j]);
                    }
                }
            }
        }
    }

    cout << menores.first << " " << menores.second << endl;

    return 0;
}