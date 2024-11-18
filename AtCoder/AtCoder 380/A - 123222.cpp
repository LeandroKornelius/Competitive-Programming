#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
    vector<int> a;

    int contador = 0;
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] == '-') {
            contador++;
        } else {
            a.push_back(contador);
            contador = 0;
        }        
    }
    a.push_back(contador);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}