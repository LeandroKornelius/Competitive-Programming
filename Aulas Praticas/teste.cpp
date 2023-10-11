#include<bits/stdc++.h>
#include <vector> 
using namespace std;

int dp[10000];

long long int fib(int n)
{
    if(dp[n] != 0) return dp[n];
    if (n <= 1) return n;
    return  fib(n - 1) + fib(n - 2);
}

int main() {

    for(int i = 0; i < 5000; ++i) {
        dp[i] = 0;
    }
    cout << fib(40) << "\n";

    return 0;
}
