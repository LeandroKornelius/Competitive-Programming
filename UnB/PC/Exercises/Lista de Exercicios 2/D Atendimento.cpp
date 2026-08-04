#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

// Sorts descending on the first and second element of the pair
class comp {
    public: 
        bool operator()(pii& a, pii& b) {
            if (a.first == b.first) {
                return a.second > b.second; // how it will sort the second element of the pair
            }
            return a.first > b.first; // how it will sort the first element of the pair
        };
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int t = 0; // time to process clients 

    priority_queue<pii,vector<pii>,comp> pq; // min pq
    vector<int> v;
    queue<int> c; 

    for (int i = 0; i < n; i++) {
        int vi;
        cin >> vi;
        v.push_back(vi); 
        pq.push(make_pair(0, i + 1));
    }

    for (int i = 0; i < m; i++) {
        int cj;
        cin >> cj;
        c.push(cj);
    }

    while (!c.empty()) {
        int items = c.front();
        c.pop();

        pii nextRegister = pq.top();
        pq.pop();


        if (t < nextRegister.first) {
            // time passed is not enough for the register to have processed its items, which means time need to pass so it can receive a new client
            t += nextRegister.first - t;
        }
        // time passed is already enough for this register to have processed its items, which means it can receive a new client
        pq.push(make_pair(items * v[nextRegister.second - 1] + t, nextRegister.second));
    }

    while (!pq.empty()) {
        pii nextRegister = pq.top();
        pq.pop();

        if (t < nextRegister.first) {
            // time passed is not enough for the register to have processed its items, which means time need to pass so it can receive a new client
            t += nextRegister.first - t;
        }
    }

    cout << t << endl;    

    return 0;
}