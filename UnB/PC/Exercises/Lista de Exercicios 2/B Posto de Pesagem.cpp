#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, f, p;
    cin >> n >> f >> p;

    queue<int> fila;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        fila.push(aux);
    }

    int num = 1;
    int tempo = 0;

    while(!fila.empty()) {
        if ((num - 1) % f == 0) {
            // truck will be checked
            if (fila.front() <= p) {
                // truck within limits
                tempo += 5;
            } else {
                // truck not withing limits, will reduce weight by two and go back to line
                int newWeight = fila.front() - 2;
                fila.push(newWeight);
                tempo += 10;
            }
        } else {
            tempo++;
        }
        fila.pop();
        num++;
    }

    cout << tempo << endl;

    return 0;
}