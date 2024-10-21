#include<bits/stdc++.h>
using namespace std;

#define ll long long;

vector<int> geraLinhaMatriz(int num) {
    vector<int> linhaMatriz;
    while (num != 0) {
        linhaMatriz.insert(linhaMatriz.begin(), num % 10);
        num = num / 10;
    }
    return linhaMatriz;
}

int qntsUns(vector<int> linhaMatriz) {
    int qnt = 0;
    for (int i = 0; i < linhaMatriz.size(); i++) {
        if (linhaMatriz[i] == 1) qnt++;
    }
    return qnt;
}

int distEntreUns(vector<int> linhaMatriz) {
    int indPrimeiro, indUltimo;
    bool achouPrimeiro = false;
    for (int i = 0; i < linhaMatriz.size(); i++) {
        if (linhaMatriz[i] == 1) {
            if (!achouPrimeiro) {
                indPrimeiro = i;
                achouPrimeiro = true;
            }
            indUltimo = i;
        }
    }
    return indUltimo - indPrimeiro + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int linhas, colunas = 0;

    for (int i = 0; i < n; i++) {
        int linha;
        cin >> linha;
        vector<int> linhaMatriz = geraLinhaMatriz(linha);
        if (qntsUns(linhaMatriz) != 0) {
            linhas++;
            int dist = distEntreUns(linhaMatriz);
            if (dist > colunas) {
                colunas = dist;
            }
        }
    }

    cout << colunas << "x" << linhas << endl;  
    
    return 0;
}