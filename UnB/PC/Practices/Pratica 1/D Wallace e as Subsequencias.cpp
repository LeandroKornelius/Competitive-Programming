#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        // Forming b vector for each test case
        vector<int> b;
        for (int j = 0; j < 7; j++) {
            int aux;
            cin >> aux;
            b.push_back(aux);
        }
        vector<int> a;
        // Two smallest numbers must be part of a
        a.push_back(b[0]);
        a.push_back(b[1]);
        bool firstOccurance = true;
        // For the last, I must find the smallest number that isnt the sum of the two first number unless there is more than one occurence of this number
        for (int k = 2; k < 7; k++) {
            if (b[k] != b[0] + b[1]) {
                a.push_back(b[k]);
                break;
            } else if (!firstOccurance) {
                a.push_back(b[k]);
                break;
            } else {
                firstOccurance = false;
            }

         }
         for (int l = 0; l < 3; l++) {
            cout << a[l] << " ";
         }
         cout << endl;
    }   

    return 0;
}