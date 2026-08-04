#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, g, f, c;
    cin >> n >> g >> f >> c;
    
    int menorDoPar;
    if (g >= f) {
        menorDoPar = f;
    } else {
        menorDoPar = g;
    }
    
    int maiorQntPessoas = c + menorDoPar;
    
    if (maiorQntPessoas > n) {
        cout << n << endl;
    } else {
        cout << maiorQntPessoas << endl;
    }
    
    return 0;
}