#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int cont = 0;
    
    for (int i = 0; i < n; i++) {
        string l;
        cin >> l;
        bool flagPlus = false;
        for (int j = 0; j < 3; j++) {
            if (l[j] == '+') {
                flagPlus = true;
            }
        }
        if (flagPlus) {
            cont++;
        } else {
            cont--;
        }
    }
    
    cout << cont << endl;
 
    return 0;
}