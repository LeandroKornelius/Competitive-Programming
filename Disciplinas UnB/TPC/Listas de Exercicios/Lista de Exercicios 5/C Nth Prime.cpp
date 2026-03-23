#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MAX = 9e7;

vector<ll> primes;
vector<int> sp(MAX, 0); // MAX = ~1e7
// sp[i] = smallest prime divisor of i
// after running sieve(), sp[i] == i for primes

void sieve(ll n = MAX - 1) {
    for (ll i=2; i <= n; i++) {
        if (sp[i] == 0) { // i is prime
            sp[i] = i; // {sp[i] == i} for prime numbers
            primes.push_back(i);
        }
        // visit every composite number that has primes[j] as the sp
        for (ll j = 0; i * primes[j] <= n; j++) {
            sp[i * primes[j]] = primes[j];
            if (primes[j] == sp[i]) break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll q;
    cin >> q;

    vector<ll> numbers;

    while (q--) {
        ll aux;
        cin >> aux;
        numbers.push_back(aux);
    }

    sieve();

    for (ll number : numbers) {
        cout << primes[number - 1] << endl;
    }        

    return 0;
}