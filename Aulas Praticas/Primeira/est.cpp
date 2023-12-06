#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string entrada;
    cin >> entrada;

    bool certo = true;
    for (int i = 0; i < entrada.size(); i++) {
        if (entrada[i] == '4') {
            if (i - 1 >= 0) {
                if (entrada[i - 1] == '4') {
                    if (i - 2 >= 0) {
                        if (entrada[i - 2] != '1') {
                            certo = false;
                            break;
                        }
                    } else {
                        certo = false;
                        break;
                    }
                }
            } else {
                certo = false;
                break;
            }
        } else {
            if (entrada[i] != '1') {
                certo = false;
                break;
            }
        }
    }

    if (certo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}