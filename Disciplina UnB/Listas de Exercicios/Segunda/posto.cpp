#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, f, p, elem;
    queue<int> filaFiscal;
    int cont = 0;
    int tempo = 0;

    cin >> n >> f >> p;

    for (int i = 0; i < n; i++) {
        cin >> elem;
        filaFiscal.push(elem);
    }

    while(!filaFiscal.empty()) {
        elem = filaFiscal.front();
        if (cont % f == 0) { // fiscaliza
            if (elem > p) {
                filaFiscal.push(elem - 2);
                tempo += 10;
            } else {
                tempo += 5;
            }
        } else {
            tempo++;
        }
        filaFiscal.pop();
        cont++;
    }  

    cout << tempo << "\n";  

    return 0;
}