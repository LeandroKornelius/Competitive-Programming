#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int dia = 0;
    
    while (n > 0) {
        n--;
        dia++;
        if (dia % m == 0) {
            n++;
        } 
    }

    cout << dia << endl;

    return 0;
}