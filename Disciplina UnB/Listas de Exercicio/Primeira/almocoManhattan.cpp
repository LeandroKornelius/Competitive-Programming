#include<bits/stdc++.h>
using namespace std;
#include <cstdlib> // needed to use abs(value) function

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int numRestaurantes, xChico, yChico, xRestaurante, yRestaurante, precoRestaurante;
    int menorCusto = 1000000000;
    int pos; 

    cin >> numRestaurantes;
    cin >> xChico;
    cin >> yChico;

    for (int i = 0; i < numRestaurantes; i++) {
        cin >> xRestaurante;
        cin >> yRestaurante;
        cin >> precoRestaurante;

        int custoDist = 2 * (abs(xChico - xRestaurante) + abs(yChico - yRestaurante));
        if (custoDist + precoRestaurante < menorCusto) {
            menorCusto = custoDist + precoRestaurante;
            pos = i + 1;
        }
    }

    cout << menorCusto << " " << pos << "\n";

    return 0;
}