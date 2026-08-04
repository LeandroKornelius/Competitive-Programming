#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, a;
    cin >> n >> a;
    
    // resto da divisao por 500 sera a quant necessarias de moedas de 1. Logo:
    
    if (n % 500 <= a) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }
    
    return 0;
}