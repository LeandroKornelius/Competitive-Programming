#include<bits/stdc++.h>
using namespace std;

#define ll long long



// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    // Obtendo qBins ate n 
    vector<int> valores;
    for (int i = 1; i < n; i++) {
        bool qBin = true;
        string numStr = to_string(i);
        for (char digit : numStr) {
            if (digit != '0' || digit != '1') {
                qBin = false;
                break;
            }
        } 
        if (qBin) {
            valores.push_back(i);
        }
    }


    
    
    return 0;
}