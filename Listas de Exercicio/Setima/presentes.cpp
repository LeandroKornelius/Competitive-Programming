#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool possivel(vector<int> cs, int maior, int maes) {
    int totMaes = 0;

    for (int i = 0; i < cs.size(); i++) {
        totMaes += cs[i] / maior;
    }

    return totMaes >= maes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    vector<int> c;

    for (int i = 0; i < n; ++i) {
        int aux;
        cin >> aux;
        c.push_back(aux);
    }

    sort(c.begin(), c.end(), greater<int>());

    int l = 1;
    int r = c[0];
    int maior = 0;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (possivel(c, mid, m)) {
            maior = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << maior << endl;

    return 0;
}
