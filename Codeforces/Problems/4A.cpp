#include<bits/stdc++.h>
using namespace std;
 
#define ll long long

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    return false;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int w;
    cin >> w;

    int begin = 1;
    bool flag = false;
    w--;

    while (begin <= w) {
        if (isEven(begin) && isEven(w)) {
            flag = true;
            break;
        }
        begin++;
        w--;
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}