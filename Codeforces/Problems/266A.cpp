#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int removed = 0;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i]) {
            // previous and current are equal, must remove the current
            removed++;
        }
    }

    cout << removed << endl;    

    return 0;
}