#include<bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int funcs, clientes, itens, tempo;
    cin >> funcs;
    cin >> clientes;
    int total = 0;

    queue<int> filaItens;
    vector<int> temposFuncs;
    vector<int> caixas(funcs, 0);

    for (int i = 0; i < funcs; i++) {
        cin >> tempo;
        temposFuncs.push_back(tempo);
    }

    for (int i = 0; i < clientes; i++) {
        cin >> itens;
        filaItens.push(itens);
    }

    while(!filaItens.empty()) {
        int posMenor = lower_bound(caixas.begin(), caixas.end(), 0) - caixas.begin();

        if (caixas[posMenor] == 0) {
            // consigo colocar o tempo do cliente
            int prov = filaItens.front();
            filaItens.pop();
            caixas[posMenor] = prov * temposFuncs[posMenor];
        } else {
            // reduzir o tempo do minimo para todos
            int menor = caixas[posMenor];
            total += menor;
            for (int i = 0; i < funcs; i++) {
                caixas[i] -= menor;
            }
        }
    }

    // inserindo tempo maior dos caixas ainda ocupados depois de processar fila
    total += *max_element(caixas.begin(), caixas.end());

    cout << total << "\n";

    return 0;
}