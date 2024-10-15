#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a;
    vector<int> votos;
    
    cin >> n; 
    cin >> a;
    
    int pref = a;
    for (int i = 1; i < n; i++) {
        cin >> a;
        votos.push_back(a);
    }
    
    sort(votos.begin(), votos.end());

    int comprou = 0;
    int maior = votos[n - 2]; 
    while (pref <= maior) {
        for (int i = n - 2; i >= 0; i--) {
            cout << i << endl;
            if (pref > maior) {
                break;
            } else {
                if (votos[i] == maior) {
                    comprou++;
                    pref++;
                } else {
                    break;
                }
            }
        }
        maior = votos[n - 2];
    }

    cout << comprou << endl;
    
    return 0;
    
}