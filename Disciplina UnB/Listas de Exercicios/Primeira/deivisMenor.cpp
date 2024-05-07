#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int linhas, colunas;
    string entrada;
    vector<char> linha;
    bool tudoZero = true;
    cin >> linhas;
    cin >> colunas;
    int primeiroColuna = colunas - 1;
    int ultimoColuna = 0;
    int primeiroLinha = linhas - 1;
    int ultimoLinha = 0;

    for (int i = 0; i < linhas; i++) {
        cin >> entrada;
        for (int j = 0; j < colunas; j++) {
            if (entrada[j] == '1') {
                tudoZero = false;
                if (j < primeiroColuna) {
                    primeiroColuna = j;
                }
                if (j > ultimoColuna) {
                    ultimoColuna = j;
                }
                if (i < primeiroLinha) {
                    primeiroLinha = i;
                } 
                if (i > ultimoLinha) {
                    ultimoLinha = i;
                }
            }
        }
    }

    if (tudoZero) {
        cout << "0x0";
    } else {
        cout << ultimoColuna - primeiroColuna + 1 << "x" << ultimoLinha - primeiroLinha + 1;
    }
    
    return 0;
}