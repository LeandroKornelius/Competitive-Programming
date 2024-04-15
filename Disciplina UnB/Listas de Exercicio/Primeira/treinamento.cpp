#include<bits/stdc++.h>
#include <vector> 
using namespace std;

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int numComps;
    vector<int> probsComps;
    int probs;
    int contador = 0;
    int dia = 1;

    cin >> numComps;

    for (int i = 0; i < numComps; i++) {
        cin >> probs;
        probsComps.push_back(probs);
    }

    sort(probsComps.begin(), probsComps.end());
    
    for(int i=0; i < probsComps.size();++i){
        if (probsComps[i] >= dia) {
            contador++;
            dia++;
        }
    }

    cout << contador << "\n";

    return 0;
}

