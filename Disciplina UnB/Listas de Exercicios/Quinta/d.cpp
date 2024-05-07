#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, aux;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        int menor = 0;
        int maior = aux - 1;
        cout << maior << " " << menor << " ";
        for (int j = 1; j < maior; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
