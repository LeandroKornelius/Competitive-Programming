#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll int n, m, a;
    cin >> n >> m >> a;

    ll int reqTilesH = 0;
    
    if (n % a == 0) {
        reqTilesH += n / a;
    } else {
        reqTilesH += n / a + 1;
    }

    ll int reqTilesV = 1; // one vertical row is met from the horizonal requiriment
    m -= (reqTilesV * a);

    if (m > 0) {
        if (m % a == 0) {
            reqTilesV += m / a;
        } else {
            reqTilesV += m / a + 1;
        }
    }

    ll int result = reqTilesH * reqTilesV;

    cout << result << endl;
 
    return 0;
}