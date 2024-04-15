#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string entry;
    cin >> entry;
    vector<char> chars;
    
    for (int i = 0; i < entry.length(); i++) {
        bool distinct = true;
        for (int j = 0; j < chars.size(); j++) {
            if (entry[i] == chars[j]) {
                distinct = false;
            }
        }
        if (distinct) {
            chars.push_back(entry[i]);
        }
    }
    
    if (chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
 
    return 0;
}