#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string word; 
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << (word.length() - 2) << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
 
    return 0;
}