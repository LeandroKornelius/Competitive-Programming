#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> s;
    s.push(0);

    for (int i = 0; i < n; i++) {
        char c;
        int x;
        cin >> c >> x;
        if (c == 'A') {
            s.push(max(s.top(), x)); // Will always keep the heaviest on top
        } else if (c == 'R') {
            s.pop();
        } else if (c == 'V') {
            cout << s.top() << endl;
        }
    }

    return 0;
}