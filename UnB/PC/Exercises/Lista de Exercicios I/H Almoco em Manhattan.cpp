#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, xc, yc;
    cin >> n >> xc >> yc;

    int menorInd = -1;
    int cheaper = INT_MAX;

    for (int i = 0; i < n; i++) {
        int xi, yi, pi;
        cin >> xi >> yi >> pi;
        int dist = abs(xc - xi) + abs(yc - yi);
        int price = 2 * dist + pi;
        if (price < cheaper) {
            cheaper = price;
            menorInd = i;
        } 
    }

    cout << cheaper << " " << menorInd + 1 << endl;

    return 0;
}