#include <bits/stdc++.h>
using namespace std;

int dfs(int i, int j, int id, vector<vector<char>>& city, vector<vector<pair<bool, int>>>& tracker) {
    int nextI = i, nextJ = j;

    // Based on the direction of the current square, will adapt the index of the next square
    if (city[i][j] == 'N') nextI -= 1;
    else if (city[i][j] == 'S') nextI += 1;
    else if (city[i][j] == 'E') nextJ += 1;
    else if (city[i][j] == 'W') nextJ -= 1;

    // Updates the current square to visited
    tracker[i][j].first = true;

    if (tracker[nextI][nextJ].first) {
        // It has already visited the next square
        tracker[i][j].second = tracker[nextI][nextJ].second;
    } else {
        // It has not visited the next square
        tracker[i][j].second = dfs(nextI, nextJ, id, city, tracker);
    }
    return tracker[i][j].second;
}

// Complexity - O(n)
bool inside(vector<int> v, int n) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == n) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    // Matrix will hold the direction of each square in the city
    vector<vector<char>> city(n, vector<char>(m));
    // Matrix will have if the square has been visited and the graph id it will eventually lead to 
    vector<vector<pair<bool, int>>> tracker(n, vector<pair<bool, int>>(m));


    int identifier = 1;
    // Forms the matrix with its directions and tracking information
    for (int i = 0; i < n; i++) {
        string aux;
        cin >> aux;
        for (int j = 0; j < m; j++) {
            city[i][j] = aux[j];
            tracker[i][j].first = false;
            tracker[i][j].second = identifier;
            identifier++;
        }
    }

    // Checks if it needs to follow the path or not using visited matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int squareIdentifier = tracker[i][j].second;
            dfs(i, j, identifier, city, tracker);
        }
    }

    int traps = 0;
    vector<int> graphsId; // Will hold the id of the graphs formed

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Checks if the id is already in the graphsId, if not adds it and counts one more trap
            if (!inside(graphsId, tracker[i][j].second)) {
                graphsId.push_back(tracker[i][j].second);
                traps++;
            }
        }
    }

    cout << traps << endl;

    return 0;
}