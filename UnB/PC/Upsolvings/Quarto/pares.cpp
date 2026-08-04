#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int tam;
        cin >> tam;
        priority_queue<int> pq;
        for (int j = 0; j < tam; j++) {
            int aux;
            cin >> aux;
            pq.push(aux);
        }
        
        int ops = 0;
        while (!pq.empty()) {
            if (pq.top() % 2 == 0) {
                int atual = pq.top();
                while (pq.top() == atual) {
                    pq.pop();
                    pq.push(atual / 2);
                }
                ops++;
            } else {
                pq.pop();
            }          
        }

        cout << ops << endl;
    }

    return 0;
}

