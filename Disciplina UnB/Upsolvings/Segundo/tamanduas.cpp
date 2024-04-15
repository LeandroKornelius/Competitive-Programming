#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

   int x, y, z, m, n, esp;
   int contador = 0;
   char f;
   queue<int> formigas;

   cin >> x >> y >> z;
   cin >> m >> n;


    for (int i = 0; i < n; i++) {
        cin >> f;
        if (f == 'F') {
            formigas.push(x);
        } else if (f == 'A') {
            formigas.push(y);
        } else if (f == 'R') {
            formigas.push(z);
        }
    }

    esp = m;
    while (!formigas.empty()) {
        int atual = formigas.front();

        if (esp > atual) {
            esp = esp - atual;
            formigas.pop();
        } else if (esp == atual) {
            contador++;
            esp = m;
            formigas.pop();
        } else {
            // esp < atual (n consegue comer formiga)
            esp = m;
            contador++;
        }
    }

    if (esp != 0) {
        contador++;
    }
    
    cout << contador << "\n";
 
    return 0;
}