#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, d;
    cin >> n >> d;

    vector<int> thick;
    vector<int> length;

    for (int i = 0; i < n; i++) {
        int ti, li;
        cin >> ti >> li;
        thick.push_back(ti);
        length.push_back(li);
    }

    for (int i = 0; i < d; i++) {
        int max = 0;
        for (int j = 0; j < n; j++) {
            length[j] += 1;
            if (thick[j] * length[j] >= max) {
                max = thick[j] * length[j];
            }
        }
        cout << max << endl;
    }

    
    
    return 0;
}