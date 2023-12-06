#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int dia = 1;

    while (n != 0) {
        n--;
        if (dia % m == 0) {
            n++;
        }
        dia++;
    }
    
    dia--;
    cout << dia << endl;

    return 0;
}