#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<pair<bool, int>> v;

    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        v.push_back(make_pair(aux, false));
    }

    for (int i = 0; i < m; i++) {
        int aux;
        cin >> aux;
        v.push_back(make_pair(aux, true));
    }

    sort(v.begin(), v.end());

    int max = INT_MIN;
    int distL = 0;
    int distR = n + m;
    for (int i = 0; i < n + m; i++) {
        if (v[i].second) {
            // Number is tower
            distL++;

        } else {
            // Number is city
        }
    }
 

    return 0;
}