#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MAX = 1e6;

vector<ll> primes;

vector<bool> is_prime(MAX, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i < MAX; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    ll n;

    ll a, b;

    while (cin >> n && n != 0) {
        bool found = false;
 
        for (ll prime : primes) {
            if (prime >= n) break;
            ll complement = n - prime;
            if (is_prime[complement]) {
                a = prime;
                b = complement;
                found = true;
                break;
            }
        }

        if (found) cout << n << " = " << a << " + " << b << endl;
        else cout << "Goldbach's conjecture is wrong." << endl;        
    }

    return 0;
}