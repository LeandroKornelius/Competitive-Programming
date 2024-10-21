#include<bits/stdc++.h>
using namespace std;

#define ll long long;

// solucao 1 pensada separar digitos O(n), ordenar O(logn) e percorrer ate achar repetido O(n) -> complexidade de solucao O(nlogn)

bool anoBonito(int num) {
    vector<int> digitos;
    while (num != 0) {
        digitos.push_back(num % 10);
        num = num / 10;
    }

    sort(digitos.begin(), digitos.end());

    for (int i = 0; i < digitos.size(); i++) {
        if (i + 1 < digitos.size()) {
            if (digitos[i] == digitos[i + 1]) {
                return false;
            }
        }
    }

    return true;
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    x++; // checks next number
    while(!anoBonito(x)) {
        x++;
    }

    cout << x << endl;

    return 0;
}
