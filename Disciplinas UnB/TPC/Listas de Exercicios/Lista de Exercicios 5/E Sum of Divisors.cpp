#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

ll N, sum;

ll solve(ll x){
    return ((x%MOD)*((x+1)%MOD)/2)%MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;

    for(ll l = 1; l <= N; l++){
        ll r = N/(N/l);
        sum += (N/l)%MOD*(solve(r)-solve(l-1)+MOD)%MOD;
        sum = (sum+MOD)%MOD;
        l = r;
    }

    cout << sum << endl;
}

