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

    int n, q;
    cin >> n >> q;

    vector<string> words;
    for (int i = 0; i < n; i++) {
        string aux;
        cin >> aux;
        words.push_back(aux);
    }

    for (int i = 0; i < q; i++) {
        string prefix;
        cin >> prefix;
        int c = 0;
        for (int j = 0; j < words.size(); j++) {
            string s = prefix + "/" + words[j];
            vector<int> z = z_function_cp(s);
            // Since it must be a prefix from the word, I only need to check the first index excluding the prefix and separator char
            if (z[prefix.size() + 1] == prefix.size()) {
                c++;
            }
        }
        cout << c << endl;
    }  
      
    return 0;
}