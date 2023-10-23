#include <bits/stdc++.h>
using namespace std;
 
int main() {
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
 
  int n;
  int prov;
  vector<int> real;
  vector<int> ord;
 
  cin >> n;
 
  for (int i = 0; i < n; i++) {
    cin >> prov;
    real.push_back(prov);
    ord.push_back(prov);
  }

  // Ordenando e removendo repetidos usando tec do geeks
  sort(ord.begin(), ord.end());
  vector<int>::iterator ip = std::unique(ord.begin(), ord.end());
  ord.resize(std::distance(ord.begin(), ip));
 
  for (int i = 0; i < n; i++) {   // percorro real
    int l = 0, r = ord.size() - 1;
    while (l <= r) {
        // finding middle index in ord vector
        int middle = l + (r - 1) / 2;

        // seeing if middle element is the one being searched
        if (real[i] == ord[middle]) {
            cout << middle + 1 << " ";
            break;
        }

        // seing which half to keep
        if (ord[middle] < real[i]) { // keeping right portion
            l = middle + 1;
        } else {
            r = middle - 1;
        }
    }
  }
 
  return 0;

}