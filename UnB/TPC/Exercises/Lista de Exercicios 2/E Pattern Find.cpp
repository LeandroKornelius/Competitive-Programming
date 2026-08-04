#include<bits/stdc++.h>

using namespace std;

vector<int> z_function_cp(string s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        // Number of test cases
        string a, b;
        cin >> a >> b;
        // searching for substring
        string s = b + "/" + a;
        // z function array
        vector<int> z = z_function_cp(s);
        // Solution for each test case
        // Counter can be used to count and to see if there is a solution
        vector<int> indexes;
        for (int j = b.size() + 1; j < s.size(); j++) {
            if (z[j] == b.size()) {
                indexes.push_back(j - b.size());
            }
        }
        if (indexes.size() == 0) {
            cout << "Not Found" << endl;
        } else {
            cout << indexes.size() << endl;
            for (int k = 0; k < indexes.size(); k++) {
                cout << indexes[k] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}