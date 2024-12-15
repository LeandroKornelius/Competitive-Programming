#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string a;
        cin >> a; 
        for (int j = a.size() - 1; j >= 0; j--) {
            if (a[j] == 'q') {
                cout << 'p';
            } else if (a[j] == 'p') {
                cout << 'q';
            } else {
                cout << a[j];
            }
        }
        cout << endl;
    }

    return 0;
}