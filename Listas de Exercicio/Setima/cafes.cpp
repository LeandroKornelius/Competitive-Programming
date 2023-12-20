#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    vector<int> arabica;
    vector<int> conilon;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        arabica.push_back(aux);
    }

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        conilon.push_back(aux);
    }

    ll maior = 0;
    ll soma1 = accumulate(arabica.begin(), arabica.end(), 0);
    ll soma2 = accumulate(conilon.begin(), conilon.end(), 0);
    while ((soma1 + soma2) * maior <= k) {
        maior++;
    } 
    maior--;

    cout << maior;

    return 0;
}
