#include <bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int qnt;
    string nome;
    vector<string> nomes;
    vector<string> nomesOrd;

    cin >> qnt;

    for (int i = 0; i < qnt; i++) {
        cin >> nome;
        nomes.push_back(nome);
        nomesOrd.push_back(nome);
    }

    sort(nomesOrd.begin(), nomesOrd.end()); 
    /*Caso quisesse ordenar ao contrario precisaria de uma func comparadora 
    Tal iria retorna a > b e seria inserida como param para sort*/

    for (int i = 0; i < qnt; i++) { // iterando n ordenada
        for (int j = 0; j < qnt; j++) {
            if (nomes[i] == nomesOrd[j]) {
                cout << j << " ";
                break;
            }
        }
    }

    return 0;
}