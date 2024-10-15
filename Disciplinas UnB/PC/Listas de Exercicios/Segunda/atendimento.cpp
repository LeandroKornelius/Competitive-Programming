#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
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
        int menor = 101 * 101;
        int pos;

        for (int i = 0; i < funcs; i++) {
            if (caixas[i] * temposFuncs[i] < menor) {
                menor = caixas[i] * temposFuncs[i];
                pos = i;
            }
        }

        if (caixas[pos] == 0) {
            // consigo colocar o tempo do cliente
            int prov = filaItens.front();
            filaItens.pop();
            caixas[pos] = prov * temposFuncs[pos];
        } else {
            // reduzir o tempo do minimo para todos
            int menor = caixas[pos];
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

/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int funcionarios, clientes, pessoa, tempoTotal = 0;
    scanf("%d %d", &funcionarios, &clientes);
    
    vector<int> temposCaixa(funcionarios);
    for (int i = 0; i < funcionarios; i++) {
        scanf("%d", &temposCaixa[i]);
    }
 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> caixas;
 
    for (int i = 0; i < funcionarios; i++) {
        caixas.push({0, i});
    }
 
    for (int i = 0; i < clientes; i++) {
        scanf("%d", &pessoa);
 
        pair<int, int> caixa = caixas.top();
        caixas.pop();
 
        int terminoAtendimento = caixa.first;
 
        tempoTotal = max(tempoTotal, terminoAtendimento + pessoa * temposCaixa[caixa.second]);
 
        caixas.push({terminoAtendimento + pessoa * temposCaixa[caixa.second], caixa.second});
    }
 
    cout << tempoTotal << endl;
 
    return 0;
}
*/