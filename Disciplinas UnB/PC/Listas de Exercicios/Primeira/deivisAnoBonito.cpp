#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int inicio, prov;
    bool cond = true;
    cin >> inicio;
    vector<int> digitos; 

    
    for (int ano = inicio + 1; ano <= 9999; ano++) {
        prov = ano;
        while (prov != 0) {
            digitos.push_back(prov % 10);
            prov /= 10;
        }
        
        sort(digitos.begin(), digitos.end());

        for (int i = 0; i < digitos.size(); i++) {
            if (i + 1 < digitos.size()) { // consigo acessar prox
                if (digitos[i] == digitos[i + 1]) { // repete
                    cond = false;
                    break;
                }
            }
        }
        
        digitos.clear();

        if (cond) {
            cout << ano << "\n";
            break;
        } else {
            cond = true;
        }
    }
    return 0;
}