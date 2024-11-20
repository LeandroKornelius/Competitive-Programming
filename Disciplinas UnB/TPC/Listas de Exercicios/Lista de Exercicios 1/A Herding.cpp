#include <bits/stdc++.h>
using namespace std;

void dfs(int startingLine, int startingColumn, vector<vector<char>>& graph, vector<vector<bool>>& visited) {
    visited[startingLine][startingColumn] = true;

    // Sees what is next square it need to go to
    int nextLine = startingLine, nextColumn = startingColumn;
    if (graph[startingLine][startingColumn] == 'N') nextLine -= 1;
    else if (graph[startingLine][startingColumn] == 'S') nextLine += 1;
    else if (graph[startingLine][startingColumn] == 'E') nextColumn += 1;
    else if (graph[startingLine][startingColumn] == 'W') nextColumn -= 1;

    // Checks to see if next has been visited, if not it needs to go to it
    if (!visited[nextLine][nextColumn]) {
        dfs(nextLine, nextColumn, graph, visited);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    // Matriz will hold the directions in type char of each square in the city
    vector<vector<char>> city(n, vector<char>(m));
    // Matrix will hold if the square has been visited or not
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Forms the matriz with its directions
    for (int i = 0; i < n; i++) {
        string aux;
        cin >> aux;
        for (int j = 0; j < m; j++) {
            city[i][j] = aux[j];
        }
    }

    int traps = 0;

    // Checks if it needs to follow the path or not using visited matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // If I have not visited a square I need a new trap for it
            if (!visited[i][j]) {
                dfs(i, j, city, visited);
                traps++;
            }
        }
    }

    cout << traps << endl;

    return 0;
}