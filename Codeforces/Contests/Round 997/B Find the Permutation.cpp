#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<string> graph(n);
        vector<int> degree(n, 0);
        
        for (int i = 0; i < n; ++i) {
            cin >> graph[i];
            for (int j = 0; j < n; ++j) {
                if (graph[i][j] == '1') {
                    degree[i]++;
                }
            }
        }
        
        vector<pair<int, int>> nodes;
        for (int i = 0; i < n; ++i) {
            nodes.emplace_back(degree[i], i + 1);
        }
        
        sort(nodes.begin(), nodes.end(), [](const pii &a, const pii &b) {
            if (a.first != b.first) return a.first < b.first; 
            return a.second > b.second; 
        });
        
        for (int i = 0; i < n; ++i) {
            cout << nodes[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}
