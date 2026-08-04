#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> registeredFinish;
    vector<int> realFinish;
    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        registeredFinish.push_back(aux);
        realFinish.push_back(aux);
    }

    sort(realFinish.begin(), realFinish.end());

    for (int j = 0; j < n; j++) {
        int search = registeredFinish[j];
        // Lower bound will return the iterator pointing to the first element that is greater than or equal
        // Since the searched element will always be found, it will return an iterator to the first occurence of the element to be found which +1 is what we need
        int pos = lower_bound(realFinish.begin(), realFinish.end(), search) - realFinish.begin() + 1; 
        cout << pos << " ";
        
    }
    
    cout << endl;

    return 0;
}