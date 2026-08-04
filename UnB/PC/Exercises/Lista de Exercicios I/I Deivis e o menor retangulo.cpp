#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int indMinLinha, indMaxLinha = -1;
    int indMinColuna, indMaxColuna = -1;
    bool tudoZero = true;

    // itera pelas linhas da matriz a medida que as recebe
    bool achouLinhaMin = false;
    for (int i = 0; i < n; i++) {
        string linha;
        cin >> linha;
        bool achouColunaMin = false;
        for (int j = 0; j < linha.size(); j++) {
            if (linha[j] == '1') {
                tudoZero = false;
                if (!achouLinhaMin) {
                    indMinLinha = i; 
                    achouLinhaMin = true;
                }
                indMaxLinha = i;  
                if (!achouColunaMin && j < indMinColuna) {
                    indMinColuna = j;
                    achouColunaMin = true;
                }
                if (j > indMaxColuna) {
                    indMaxColuna = j;
                }
            } 
        }
    }

    if (tudoZero) {
        cout << "0x0" << endl;
    } else {
        cout << indMaxColuna - indMinColuna + 1 << "x" << indMaxLinha - indMinLinha + 1 << endl;
    }
    
    return 0;
}