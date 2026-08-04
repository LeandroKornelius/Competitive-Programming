#include<bits/stdc++.h>
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, maior, elem;
    char clas;
    stack<pair<int, int>> s;
    pair<int, int> p;
    pair<int, int> topo;

    cin >> n;
    s.push(make_pair(0,0));

    for (int i = 0; i < n; i++) {
        cin >> clas;
        cin >> elem;

        if (clas == 'A') {
            p.first = elem;
            maior = s.top().second;
            if (elem > maior) {
                p.second = elem;
            } else {
                p.second = maior;
            }
            s.push(p);

        } else {
            if (clas == 'V') {
                topo = s.top();
                cout << topo.second << "\n";
            } else {
                if (clas == 'R') {
                    s.pop();
                }
            } 
        }
    }

    return 0;
}