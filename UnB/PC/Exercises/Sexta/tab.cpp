#include<bits/stdc++.h>
using namespace std;

#define ll long long



// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    string aux;

    vector<vector<char>> ideal;    
    vector<vector<char>> real;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        vector<char> prov1;
        vector<char> prov2;
        bool comecaB;
        if (i % 2 == 0) {
            comecaB = true;
        } else {
            comecaB = false;
        }
        for (int j = 0; j < m; j++) {
            prov2.push_back(aux[j]);
            if (comecaB) {
                if (j % 2 == 0) {
                    prov1.push_back('B');
                } else {
                    prov1.push_back('W');
                }
            } else {
                if (j % 2 == 0) {
                    prov1.push_back('W');
                } else {
                    prov1.push_back('B');
                }
            }
        }
        ideal.push_back(prov1);
        real.push_back(prov2);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (real[i][j] == '.') {
                real[i][j] = ideal[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << real[i][j];
        }
        cout << endl;
    }
    
    return 0;
}