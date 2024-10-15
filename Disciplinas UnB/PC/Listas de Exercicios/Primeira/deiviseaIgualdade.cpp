#include <bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int qnt;
    int entrada;
    int maior = 0;
    int contador = 0;
    cin >> qnt;

    vector<int> pessoas;

    for (int i = 0; i < qnt ; i++) {
        cin >> entrada;
        if (entrada > maior) {
            maior = entrada;
        }
        pessoas.push_back(entrada);
    }

    sort(pessoas.begin(), pessoas.end());

    for (int i = 0; i < qnt ; i++) {
        contador = contador + (maior - pessoas[i]);
    }

    cout << contador << "\n";

    return 0;
}