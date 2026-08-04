#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    cin >> n;
    double acertos = 0;
    for (int i = 0; i < n; i++) {
        char resposta, gabarito;
        cin >> resposta >> gabarito;
        if (resposta == gabarito) {
            acertos += 10;
        }
    }

    double nota = acertos / n;

    printf("Nota: %.2lf", nota);

    return 0;
}