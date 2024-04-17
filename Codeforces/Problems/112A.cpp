#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   string one, two;
   cin >> one >> two;
   
   bool iguais = true;
   bool menor;
   
   for (int i = 0; i < one.length(); i++) {
       if (tolower(one[i]) != tolower(two[i])) {
           iguais = false;
           if (tolower(one[i]) < tolower(two[i])) {
               menor = true;
           } else {
               menor = false;
           }
           break;
       }
   }
   
   if (iguais) {
       cout << 0 << endl;
   } else {
       if (menor) {
           cout << -1 << endl;
       } else {
           cout << 1 << endl;
       }
   }
    
 
    return 0;
}