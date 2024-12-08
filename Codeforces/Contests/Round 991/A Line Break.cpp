#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        int counter = 0;
        int l = 0;
        for (int j = 0; j < n; j++) {
            string word;
            cin >> word;
            if (l + word.size() <= m) {
                counter++;
            } 
            l += word.size();
        }
        cout << counter << endl;
    }

    return 0;
}