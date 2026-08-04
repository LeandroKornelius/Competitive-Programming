#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    vector<int> cidadaos;
    
    for (int i = 0; i < n; i++) {
        int cidadao;
        cin >> cidadao;
        cidadaos.push_back(cidadao);
    }
    sort(cidadaos.begin(), cidadaos.end());
    
    int maiorDinheiro = cidadaos[cidadaos.size() - 1];
    
    int qntParaIgualdade = 0;
    
    for (int i = 0; i < n; i++) {
        qntParaIgualdade += maiorDinheiro - cidadaos[i];
    }
    
    cout << qntParaIgualdade << endl;
    
    return 0;
}