#include <bits/stdc++.h>

using namespace std;

int tb[1005][100005];
set<int> sums;

int n;
vector<int> coins;

void dp(int i, int currentSum)
{
    // If out of bounds, store the current sum
    if(i >= n) {
        sums.insert(currentSum);
        return;
    }
        
    // Value is already calculated
    if(tb[i][currentSum] != -1)
        return;

    // Need to calculate new value and mark that this sum has been visited
    tb[i][currentSum] = 1;

    dp(i + 1, currentSum); // Does not take current coin
    dp(i + 1, currentSum + coins[i]); // Takes current coin
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(tb,-1,sizeof(tb));
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        coins.push_back(aux);
    }

    dp(0, 0);

    cout << sums.size() - 1 << endl;

    for (int sum: sums) {
        if (sum != 0) cout << sum << " ";
    }
    cout << endl;
    
    return 0;
}