#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        set<int> divs;
        int x;
        cin >> x;
        int lim = sqrt(x);

        for (int i = 1; i <= x; i++) {
            if (n % i == 0) {
                divs.insert(i);
                divs.insert(x / i);
            }
        }

        cout << divs.size() << endl;
    }

    return 0;
}