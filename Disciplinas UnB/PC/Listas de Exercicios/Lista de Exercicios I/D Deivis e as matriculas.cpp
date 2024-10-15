#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int findIndexOf(string target, vector<string> v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == target) return i;
    }
    return -1; // nao encontrou o target
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    vector<string> amigos;
    vector<string> amigosOrd;
    
    for (int i = 0; i < n; i++) {
        string amigo;
        cin >> amigo;
        amigos.push_back(amigo);
        amigosOrd.push_back(amigo);
    }
    
    sort(amigosOrd.begin(), amigosOrd.end());
    
    for (int i = 0; i < n; i++) {
        cout << findIndexOf(amigos[i], amigosOrd) << " ";
    }
    
    return 0;
}