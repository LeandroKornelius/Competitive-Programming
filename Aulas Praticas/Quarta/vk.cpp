#include<bits/stdc++.h>
using namespace std;

#define ll long long

// Code doesnt work because changing letter will affect further results
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string entry;
    cin >> entry;

    int certo = 0;
    int arruma = 0;

    for (int i = 0; i < entry.size(); i++) {
        if (entry[i] == 'V') {
            if (i + 1 < entry.size()) {
                if (entry[i + 1] == 'K') {
                    certo++;
                } else {
                    arruma++;
                }
            }
        } else {
            // entry[i] == 'K'
            if (entry[i - 1] <= 0) {
                // if the previous was a V it was already counted as correct
                if (entry[i - 1] == 'K') {
                    arruma++;
                }
            }
        }
    }   

    if (arruma != 0) {
        cout << certo + 1 << endl;
    } else {
        cout << certo << endl;
    }
    

    return 0;
}