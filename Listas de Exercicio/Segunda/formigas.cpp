#include<bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string entrada;
    int contadorFormigas = 0;
    int total = 0;
    bool primeiraRa = true;
    char ultimo;

    cin >> entrada;

    for (int i = 0; i < entrada.size(); i++) {
        if (entrada[i] == 'r') {
            if (primeiraRa) {
                primeiraRa = false;
            } else {
                total += contadorFormigas;
            }
            contadorFormigas = 0;
            ultimo = 'r';
        } else if (entrada[i] == 's') {
            contadorFormigas = 0;
            ultimo = 's';
        } else {
            contadorFormigas++;
        }
    }

    if (ultimo == 'r') {
        total += contadorFormigas;
    }

    cout << total << "\n";

    return 0;
}