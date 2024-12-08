#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string n;
        cin >> n;
        string lastTwoDigits = n.substr(n.size() - 2, 2);
        int num = stoi(lastTwoDigits);
        if (num % 9 == 0) {
            cout << "YES" << endl;
        } else {
            if (num == 3 || num == 25 || num == 52 || num == 30 || num == 33) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}