#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, elem;
    cin >> n;
    vector<int> real(n), ord(n);

    for (int i = 0; i < n; i++) {
        cin >> elem;
        real[i] = elem;
        ord[i] = elem;
    }

    sort(ord.begin(), ord.end());

    for (int i = 0; i < n; i++) {
        int pos = lower_bound(ord.begin(), ord.end(), real[i]) - ord.begin() + 1;
        cout << pos << " ";
    }

    return 0;
}
