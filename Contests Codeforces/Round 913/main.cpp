#include<bits/stdc++.h>
using namespace std;

#define ll long long

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string letters = "abcdefgh";
    string nums = "12345678";

    for (int i = 0; i < t; i++) {
        string pos;
        cin >> pos;
        
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != pos[1]) {
                cout << pos[0] << nums[j] << endl;
            }
        }

        for (int k = 0; k < letters.size(); k++) {
            if (letters[k] != pos[0]) {
                cout << letters[k] << pos[1] << endl;
            }
        }
    }
    


    
    

    return 0;
}