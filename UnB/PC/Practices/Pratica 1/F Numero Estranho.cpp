#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    bool isEstranho = true;
    int straightFours = 0;
    
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '1') {
            straightFours = 0;
            continue;
        } else if (n[i] == '4' && i != 0) {
            straightFours++;
            if (straightFours > 2) {
                isEstranho = false;
                break;
            }
        } else {
            isEstranho = false;
            break;
        }
    }

    if (isEstranho) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}