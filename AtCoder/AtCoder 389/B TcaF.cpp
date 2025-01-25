#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll int x;
    cin >> x;

    ll int fatorial = 1;
    ll int n = 1;

    while (fatorial != x) {
        fatorial *= n;
        n++;
    }

    cout << n - 1 << endl;
    
    return 0;
}