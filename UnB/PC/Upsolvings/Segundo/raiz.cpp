#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n; // 1000000000000000000
    bool flag = false;
    cin >> n;

    for (long long int i = 1; i < 10000001; i++) {
        if (i * i * i == n) {
            flag = true;
            cout << i << "\n";
            break;
        }
    }

    if (!flag) {
        cout << -1 << "\n";
    }

    return 0;
}
