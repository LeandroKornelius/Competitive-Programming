#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        while (true) {
            if (0 == (n & (n - 1))) {
                break;
            } else {
                n = n & (n - 1);
            }
        }
        cout << n - 1 << endl;
    }

    return 0;
}
