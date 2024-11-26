#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll int x, y;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        if (x - y == 1) {
            // won't have a prime to subtract from x however many times to reach y because the difference isnt a prime. If zero was available it would need to be added in the condition as well
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}