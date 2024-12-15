#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int rowOne = m;
        int rowTwo = m;
        if (m >= a) {
            // more spots then monkeys a for rowOne
            rowOne = a;
        } else {
            // m < a
            // less spots than monkeys a for rowOne
            rowOne = m;
        }
        if (m >= b) {
            // more spots then monkeys b for rowOne
            rowTwo = b;
        } else {
            // m < b
            // less spots than monkeys a for rowOne
            rowTwo = m;
        }

        if (c >= (2 * m - (rowOne + rowTwo))) {
            cout << rowOne + rowTwo + (2 * m - (rowOne + rowTwo)) << endl;
        } else {
            cout << rowOne + rowTwo + c << endl;
        }
    }

    return 0;
}