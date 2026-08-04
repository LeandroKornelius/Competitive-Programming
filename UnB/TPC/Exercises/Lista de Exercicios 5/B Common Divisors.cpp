#include <iostream>
#include <vector>
using namespace std;

const int MAX_X = 1e6;

int main() {
    int n;
    cin >> n;

    vector<int> freq(MAX_X + 1, 0);
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int gcd = MAX_X; gcd >= 1; gcd--) {
        int count = 0;
        for (int multiple = gcd; multiple <= MAX_X; multiple += gcd) {
            count += freq[multiple];
            if (count >= 2) {
                cout << gcd << endl;
                return 0;
            }
        }
    }
    return 0;
}
