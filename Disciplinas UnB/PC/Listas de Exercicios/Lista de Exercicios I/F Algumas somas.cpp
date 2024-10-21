#include<bits/stdc++.h>
using namespace std;
 
#define ll long long

int somaDigitos(int numero) {
    int soma = 0;
    while (numero != 0) {
        soma += numero % 10;
        numero = numero / 10;
    }
    return soma;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, a, b;
    int somaTotal = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        int somaParcial = somaDigitos(i);
        if (a <= somaParcial && somaParcial <= b) {
            somaTotal += i;
        }
    }  

    cout << somaTotal << endl; 
    
    return 0;
}