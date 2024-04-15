#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, prov;
    int somaDigitos = 0;
    int somaTotal = 0;

    cin >> n;
    cin >> a;
    cin >> b;

    for (int i = 1; i <= n; i++) {
        prov = i;
        while (prov != 0) {
            somaDigitos += (prov % 10);
            prov /= 10;
        }
        if (somaDigitos >= a && somaDigitos <= b) {
            somaTotal += i;
        }
        somaDigitos = 0;
    }

    cout << somaTotal << "\n";

    return 0;
}