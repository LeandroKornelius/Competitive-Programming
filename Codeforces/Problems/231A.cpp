#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int contador = 0;
    
    for (int i = 0; i < n; i++) {
        int f1, f2, f3;
        cin >> f1 >> f2 >> f3;
        if (f1 + f2 + f3 >= 2) {
            contador++;
        }
    }
    
    cout << contador << endl;
    
 
    return 0;
}