#include <bits/stdc++.h>
using namespace std;

// ACCEPTED
bool isPrime(long long int num) {
    if (num <= 1) return false;
    for (long long int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int x, y;
        cin >> x >> y;

        if (x - y > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

