#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k; 
    cin >> n >> k; 

    ll halfway; 

    if (n % 2 == 0) {
        halfway = n / 2;
    } else {
        halfway = n / 2 + 1;
    }

    if (k <= halfway) {
        // number searched is odd - will be at the beginning
        cout << 2 * k - 1 << endl;
    } else {
        // number searched is even - will be at the pos + n / 5, which is the odd at k + 1
        cout << 2 * (k - halfway) << endl;
    }

    return 0;
}