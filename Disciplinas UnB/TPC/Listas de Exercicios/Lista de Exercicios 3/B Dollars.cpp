#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<int> tb[1000005];

vector<int> coins = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000}; // coins in cents to not deal with doubles

set<vector<int>> combs;

vector<int> dp(int value, vector<int> coinsAmount) {
    if (value == 0) {
        return coinsAmount;
    } 

    if (tb[value] != vector<int>(11, 0)) {
        return tb[value];
    }

    for (int i = 0; i < coins.size(); i++) {
        if (value >= coins[i]) {
            // Need to check the path using this coin
            coinsAmount[i] += 1;
            vector<int> amounts = dp(value - coins[i], coinsAmount);
            tb[value] = amounts;
            combs.insert(amounts);
            for (int coin : amounts) {
                cout << coin << ",";
            }
            cout << endl;
        } else {
            break;
        }
    }

    return tb[value];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 1000005; i++) {
        tb[i] = vector<int>(11, 0);
    }


    bool stop = false;
    double value;

    while (!stop) {
        cin >> value;
        if (value == 0) {
            stop = true;
        } else {
            int adaptedValue = round(value * 100);
            dp(adaptedValue, vector<int>(11, 0));
            cout << combs.size() << endl;
            combs.clear();
        }
        
    }

    return 0;
}