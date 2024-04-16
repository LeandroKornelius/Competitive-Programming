#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    int pass = 0;
    vector<int> scores;

    int sep;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        if (i + 1 == k) {
            sep = score;
        }
        scores.push_back(score);
    }

    for (int i = 0; i < n; i++) {
        if (scores[i] > 0 && scores[i] >= sep) {
            pass++;
        } else {
            break;
        }
    }

    cout << pass << endl;
 
    return 0;
}