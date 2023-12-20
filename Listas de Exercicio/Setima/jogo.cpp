#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> id;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        id.push_back(aux);
    }

    for (int j = 0; j < m; j++) {
        int consulta;
        cin >> consulta;
        bool achou = false;
        int k = 0;
        for (k; k < n; k++) {
            if (id[k] == consulta) {
                achou = true;
                break;
            }
        }
        if (achou) {
            cout << k + 1 << " ";
        } else {
            cout << "-1" << " ";
        }
    }

    return 0;
}