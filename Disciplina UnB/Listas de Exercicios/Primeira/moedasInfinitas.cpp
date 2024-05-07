#include <bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    cin >> n;
    cin >> a;

    if (n % 500 <= a) cout << "Sim\n";
    else cout << "Nao\n";

    return 0;
}