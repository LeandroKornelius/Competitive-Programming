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

    int n;
    cin >> n;

    queue<vector<int>> f;
    vector<vector<int>> m;
    priority_queue<pii,vector<pii>,comp> pq; // min on both elements of the pair

    m.push_back({0, 0, 0}); // inserting one element so the client 1 is in pos 1

    // starting data
    for (int i = 0; i < n; i++) {
        int ti, pi, ri;
        cin >> ti >> pi >> ri;
        m.push_back({ti, pi, ri});
        f.push({i + 1, ti, pi, ri});        
    }
    
    int t = 0;
    int tempoResolver = 0;
    while (true) {
        // Processing clients returning to the line after their wait time
        if (!pq.empty()) {
            bool clientsToReturn = true;
            while (clientsToReturn) {
                pii firstToReturn = pq.top();
                if (firstToReturn.first == t) {
                    // Client with the least amount of time will return now to the line
                    cout << "Client " << firstToReturn.second << " is returning to the line." << endl;
                    vector<int> aux = m[firstToReturn.second];
                    f.push({firstToReturn.second, aux[0], aux[1], aux[2]});
                    pq.pop();
                } else {
                    clientsToReturn = false;
                }
            }

        }

        // Processing the line
        if (!f.empty()) {
            bool clientsToPocess = true;
            while (clientsToPocess) {
                if (tempoResolver == 0) {
                    // Can process client
                    vector<int> clientProcessed = f.front();
                    cout << "Client " << clientProcessed[0] << " is being processed" << endl;
                    if (t <= clientProcessed[2]) {
                        // It has not yet lost patience
                        tempoResolver = clientProcessed[1];
                        cout << "Processed" << endl;
                    } else {
                        // Client lost patience and will return to the line in t + clientProcessed[3]
                        pq.push(make_pair((t + clientProcessed[3]), clientProcessed[0]));
                        cout << "Lost patience" << endl;
                    }
                    f.pop();
                } else {
                    clientsToPocess = false;
                }
            }
        }

        tempoResolver--;
        t++;

        if (f.empty() && pq.empty()) {
            break;
        }
    }

    

    return 0;
}