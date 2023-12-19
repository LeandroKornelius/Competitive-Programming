#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int k;
        ll x;
        cin >> k >> x;

        ll emotes = 0;
        ll qntLinha = 1;
        ll total = 2 * k - 1; 
        bool deuRuim = false;
        int j; 
        
        for (int j = 1; j < total / 2 + 1; j++) {
            if (emotes + qntLinha >= x) {
                deuRuim = true;
                break;
            } else {
                emotes += qntLinha;
                qntLinha++;
            }
        }

        if (!deuRuim) {
            for (int j = total / 2 + 1; j < total + 1; j++) {
                if (emotes + qntLinha >= x) {
                    deuRuim = true;
                    break;
                } else {
                    emotes += qntLinha;
                    qntLinha--;
                }
            }
        }

        cout << j << endl;
    }

    return 0;
}