#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string entrada;
    char ultimo = 'p';
    char atual;
    int total = 0;
    int contForms = 0;

    cin >> entrada;

    for (int i = 0; i < entrada.size(); i++) {
        atual = entrada[i];
        if (atual == '.') {
            contForms++;
        } else {
            if (atual == 'r' && ultimo == 'r') {
                total += contForms;
            }
            contForms = 0;
            ultimo = atual;
        }
    }

    if (ultimo == 'r') {
        total += contForms;
    }

    cout << total << "\n";

    return 0;
}