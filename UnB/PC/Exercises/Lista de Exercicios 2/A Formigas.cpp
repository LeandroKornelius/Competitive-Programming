#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> p; // will keep track of how many ants the frogs have eaten
    p.push(0);

    string entry;
    cin >> entry;

    int contador = 0;
    bool prevRa = false;
    for (int i = 0; i < entry.size(); i++) {
        if (entry[i] == 'r') {
            if (prevRa) {
                p.push(contador + p.top());
            }
            prevRa = true;
            contador = 0;
        } else if (entry[i] == '.') {
            contador++;
            if (prevRa && i == entry.size() - 1) {
                p.push(contador + p.top());
            }
        } else {
            prevRa = false;
            contador = 0;
        }
    }

    cout << p.top() << endl;

    return 0;
}