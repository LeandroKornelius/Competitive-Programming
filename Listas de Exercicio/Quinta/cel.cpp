#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    vector<int> nums;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        int maiorPot = 1;
        while (maiorPot < n) {
            maiorPot = maiorPot << 1;
        }
        maiorPot = maiorPot >> 1;
        cout << maiorPot << " ";
        for (int j = 0; j < n; j++) {
            if (j != maiorPot) {
                cout << j << " ";
            }
        }
        cout << endl;       
    }


    return 0;
}
