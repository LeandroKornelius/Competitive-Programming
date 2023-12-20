#include<bits/stdc++.h>
using namespace std;

#define ll long long

int buscaBinL(vector<int> v, int query) {
    
    int l = 0;
    int r = v.size() - 1;
    int result = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (v[mid] == query) {
            result = mid;
            r = mid - 1; // mais a esq
        } else if (v[mid] < query) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return result;
}

int buscaBinR(vector<int> v, int query) {
    
    int l = 0;
    int r = v.size() - 1;
    int result = -1;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (v[mid] == query) {
            result = mid;
            l = mid + 1; // mais a dir
        } else if (v[mid] < query) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return result;
}

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

    sort(p.begin(), p.end());

    int menorDif = INT_MAX;
    pair<int, int> menores;

    for (int i = 0; i < n; i++) {
        int indProcurado = buscaBinL(p, m - p[i]);
        bool indDif = true;
        if (i == indProcurado) {
            // eh o mesmo indice, mas pode ter igual em outra pos
            indDif = false;
            indProcurado = buscaBinR(p, m - p[i]);
            if (i != indProcurado) {
                indDif = true;
            }
        }
        if (indDif) {
            if (menorDif > abs(p[i] - p[indProcurado])) {
                if (p[i] <= p[indProcurado]) {
                            menores.first = p[i];
                            menores.second = p[indProcurado];
                        } else {
                            menores.first = p[indProcurado];
                            menores.second = p[i];
                        }
                        menorDif = abs(p[i] - p[indProcurado]);
            }
        }
    }

    cout << menores.first << " " << menores.second << endl;

    return 0;
}