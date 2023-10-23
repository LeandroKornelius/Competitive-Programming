#include <bits/stdc++.h>
using namespace std;

bool imparPrimo(long long int num) {
    for (int i = 3; i < num; num + 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// ERASTHOTHENS ALGORITHM 
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testes;
    long long int x, y;
    cin >> testes;

    for (int i = 0; i < testes; i++) {
        bool flag = true;
        cin >> x >> y;
        long long int dif = x - y;
        if (dif % 2 == 0) {
            flag = false;
        } else {
            for (int j = 3; j < dif; j + 2) {
                if (imparPrimo(j)) {
                    if (dif % j == 0) {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag) {
        cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }

    return 0;
}
