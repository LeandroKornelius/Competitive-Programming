#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector<int> o = {1, 2, 3, 4, 5};
    vector<int> p;

    for (int i = 1; i <= 5; i++) {
        int aux;
        cin >> aux;
        p.push_back(aux);
    }

    int perms = 0;
    int wrong = 0;
    for (int i = 0; i < 5; i++) {
        if (p[i] != o[i]) {
            wrong++;
        }
        if ((i + 1) < 5) {
            // Has next element
            if (o[i] == p[i + 1] && o[i + 1] == p[i]) {
                perms++;
                // Makes the swap
                // int aux;
                // aux = p[i];
                // p[i] = p[i + 1];
                // p[i + 1] = aux;
            }
        }
    }

    // for (int i = 0; i < 5; i++) {
    //     cout << p[i] << " ";
    // }
    // cout << endl;

    if (perms == 1 && wrong == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}