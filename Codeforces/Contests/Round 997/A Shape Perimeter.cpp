#include<bits/stdc++.h>

using namespace std;

#define pii pair<int, int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m; // number of squares & size of squares
        cin >> n >> m;
        int x = 0;
        int y = 0;
        // Firts element of the pairs is x, while the second is y
        pii smallest = make_pair(INT_MAX, INT_MAX);
        pii greatest = make_pair(INT_MIN, INT_MIN);
        for (int j = 0; j < n; j++) {
            int auxx, auxy;
            cin >> auxx >> auxy;
            x += auxx;
            y += auxy;
            smallest.first = min(smallest.first, x);
            smallest.second = min(smallest.second, y);
            greatest.first = max(greatest.first, x + m);
            greatest.second = max(greatest.second, y + m);
        }
        cout << 2 * abs(greatest.first - smallest.first) + 2 * abs(greatest.second - smallest.second) << endl;

    }

    return 0;
}