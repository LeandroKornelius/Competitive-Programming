#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;

    int n1 = s[0] - '0';
    int n2 = s[2] - '0';

    cout << n1 * n2 << endl;
    
    return 0;
}