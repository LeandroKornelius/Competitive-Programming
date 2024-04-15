#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    queue<int> fermentando;
    int total = 0;
    int tempo = 1;

    for (int i = 0; i < n; ++i) {
        int tferm;
        cin >> tferm;

        // primeira op de retirar ate achar alg ainda em fermentacao
        while (!fermentando.empty() && fermentando.front() >= tempo) {
            if (fermentando.front() == tempo) {
                total++;
                fermentando.pop();
            } else {
                if (fermentando.front() > tempo) {
                    fermentando.pop();
                }
            }
        }

        // restante da logica
        if (fermentando.empty() || fermentando.front() < tempo + tferm) {
            fermentando.push(tempo + tferm);
        } else {
            int contador = 0;
            vector<int> prov;
            bool flag = true;

            while (!fermentando.empty() || contador < m) {
                if (fermentando.front() == tempo) {
                    total++;
                } else {
                    if (fermentando.front() > tempo) {

                    } else {
                        if (flag) {
                            prov.push_back(tempo + tferm);
                            flag = false;
                        }
                        prov.push_back(fermentando.front());
                    }
                }
                fermentando.pop();
                contador++;
            }

            sort(prov.rbegin(), prov.rend());

            for (int j = 0; j < prov.size(); j++) {
                fermentando.push(prov[j]);
            }
        }
        tempo++;
    }

    // recebi entradas agora preciso processar a fila
    while (!fermentando.empty()) {
        if (fermentando.front() == tempo) {
            total++;
            fermentando.pop();
        } else {
            if (fermentando.front() > tempo) {
                fermentando.pop();
            }
        }
    }

    cout << total << endl;
    return 0;
}
