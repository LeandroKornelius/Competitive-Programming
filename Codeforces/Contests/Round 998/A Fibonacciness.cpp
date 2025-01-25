#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<int> nums(5);
        for (int j = 0; j < 5; j++) {
            int aux;
            if (j != 2) {
                cin >> aux;
                nums[j] = aux;
            }
        }

        for (int j = 0; j < 5; j++) {
            cout << nums[j] << " "; 
        }
        cout << endl;
        
        int r = 0;
        int testar; 
        for (int j = 2; j < 5; j++) {
            if (j == 2) {
                nums[2] = nums[0] + nums[1];   
            } else {
                if (nums[j] == (nums[j - 1] + nums[j - 2])) {
                    r++;
                } else {
                    if (j == )
                    nums[j] = nums[j - 1] + nums[j - 2];
                }
            }
            r++;
        }
        cout << r << endl;
    }
    
    return 0;
}