#include<bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int clientes, t, p, r;
    int tempo = 0;
    bool livre = true;
    vector<int> elemento, anterior;
    queue<vector<int>> fila; // <t1, p1, r1>, <t2, p2, r2>, ...

    cin >> clientes;
    for (int i = 0; i < clientes; i++) {
        cin >> t >> p >> r;
        elemento.push_back(i + 1); // pos na fila inicial
        elemento.push_back(t);
        elemento.push_back(p);
        elemento.push_back(r);
        fila.push(elemento);
        elemento.clear();
    }

    while (!fila.empty()) {
        elemento = fila.front();
        if (livre) {
            tempo += elemento[1];
        } else {

        }
        
    }
   
    return 0;
}