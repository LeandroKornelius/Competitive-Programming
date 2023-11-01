#include<bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, p;
    int t = 1, qnt = 1;
    queue<int> f;

    cin >> n >> m;
    int certos = n;

    // adicionando termos na fila
    for (int i = 0; i < n; i++) {

        // estao em tempo ideal ou passaram removidos, contando perdidos
        while (!f.empty() && f.front() >= t) {
            if (f.front() > t) {
                certos--;
            }
            f.pop();
        }
        
        // logica para recem produzido
        cin >> p;

        if (!f.empty()) {

            // colocado se ferm seja concluida no mesmo momento ou antes do primeiro
            if (p + t <= f.front()) {
                f.push(p + t);
            } else {
                int contador = 0;
                vector<int> inseridos;
                inseridos.push_back(p);

                // removendo necessarios e colocando os fermentandos conforme criterio
                while (!f.empty() && contador < m) {
                    int primeiro = f.front();
                    f.pop();
                    if (primeiro >= t) {
                        if (primeiro > t) {
                            certos--;
                        }
                    } else {
                        // primeiro < t logo preciso colocar dnv na fila
                        inseridos.push_back(primeiro);
                    }
                }

                sort(inseridos.begin(), inseridos.end(), greater<int>());

                for (int i = 0; i < inseridos.size(); i++) {
                    f.push(inseridos[i]);
                }
            }
        qnt++;
        t++;
        }
    }

    // esvaziando fila

    while (!f.empty() && f.front() >= t) {
        if (f.front() > t) {
            certos--;
        }
        f.pop();
        t++;
    }

    cout << certos << "\n";

    return 0;
}