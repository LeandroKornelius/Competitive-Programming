#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        set<int> divs;
        for (int i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {
                divs.insert(i);
                divs.insert(x / i);
            }
        }

        cout << divs.size() << endl;
    }

    return 0;
}