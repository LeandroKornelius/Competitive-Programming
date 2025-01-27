#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<char> activities;
    vector<int> ops;
    int restCounter = 0;

    for (int i = 0; i < n; i++) {
        int op;
        cin >> op;
        ops.push_back(op);
    }

    for (int i = 0; i < n; i++) {
        int op = ops[i];

        switch (op)
        {
        case 1:
            if (i - 1 >= 0) {
                // Has previous activity
                if (activities[i - 1] != 'w') activities.push_back('w');
                else {
                    activities.push_back('r');
                    restCounter++;
                }
            } else {
                activities.push_back('w');
            }
            break;
        
        case 2:
            if (i - 1 >= 0) {
                // Has previous activity
                if (activities[i - 1] != 's') activities.push_back('s');
                else {
                    activities.push_back('r');
                    restCounter++;
                }                
            } else {
                activities.push_back('s');
            }
            break;

        case 3:
            if (i - 1 >= 0) {
                // Has previous activity
                if (activities[i - 1] != 's') activities.push_back('s');
                else activities.push_back('w');

            } else {
                // Check next op to see which would not conclict
                if (i + 1 < n) {
                    if (activities[i + 1] == 'w') activities.push_back('s');
                    else activities.push_back('w');
                }
            }
            break;

        default:
            activities.push_back('r');
            restCounter++;
            break;
        }
    }

    cout << restCounter << endl;

    return 0;
}