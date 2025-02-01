#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;
    
    vector<int> pigeon_position(N + 1);
    vector<int> nest_count(N + 1, 1);
    int multi_nest_count = 0;
    
    for (int i = 1; i <= N; ++i) {
        pigeon_position[i] = i;
    }
    
    while (Q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int P, H;
            cin >> P >> H;
            
            int old_nest = pigeon_position[P];
            pigeon_position[P] = H;
            
            if (--nest_count[old_nest] == 1) {
                --multi_nest_count;
            }
            if (++nest_count[H] == 2) {
                ++multi_nest_count;
            }
        } else {
            cout << multi_nest_count << '\n';
        }
    }   

    return 0;
}