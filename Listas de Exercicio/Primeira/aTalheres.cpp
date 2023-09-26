#include <bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int pessoas, garfos, facas, colheres;
    cin >> pessoas;
    cin >> garfos;
    cin >> facas;
    cin >> colheres;

    if (garfos > facas) {
        if (pessoas < facas + colheres) {
            cout << pessoas << "\n";
        } else {
            cout << facas + colheres << "\n";
        }
    } else { 
        if (pessoas < garfos + colheres) {
            cout << pessoas << "\n";
        } else {
            cout << garfos + colheres << "\n";
        }
    } 


    return 0;
}