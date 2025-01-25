#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }

    double r = (double)g[1] / g[0];

    bool isG = true;
    for (int i = 0; i < n - 1; i++) {
        if (g[i + 1] / r != g[i]) {
            isG = false;
            break;
        }
    }

    if (n == 2) {
        cout << "Yes" << endl;
        return 0;
    } else {
        if (isG) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
