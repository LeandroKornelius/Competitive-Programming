#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    vector<int> comps;
    
    int res = 0;
    int dia = 1;
    
    for (int i = 0; i < n; i++) {
        int prov;
        cin >> prov;
        comps.push_back(prov);
    }
    
    sort(comps.begin(), comps.end());
    
    for (int i = 0; i < n; i++) {
        if (comps[i] < dia) {
            continue;
        } else {
            res++;
            dia++;
        }
    }
    
    cout << res << endl;
    
    
    return 0;
}