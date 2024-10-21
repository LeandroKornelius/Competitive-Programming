// Problemas -> OBI Fusao e Codeforces 277A (a fazer)

#include<bits/stdc++.h>

using namespace std;

vector<int> pai(200005), card(200005);

class DSU {
    // complexidade O(n)
    int find_set(int a){
        if (a == pai[a])
            return a;

        pai[a] = find_set(pai[a]);

        return pai[a];
    }

    // duas chamadas de find_set -> 2 * O(n) = O(n)
    bool same_sets(int a, int b){
        return find_set(a) == find_set(b);
    }

    // unir os sets dos elementos a e b - importante n quebrar hierarchia
    // complexidade O(n)
    // conseguimos reduzir complexidade para O(logn)?
    void union_sets(int a, int b){
        if (same_sets(a, b))
            return;

        int pai_a = find_set(a);
        int pai_b = find_set(b);

        if (card[pai_a] > card[pai_b]) {
            // conecta conjunto do b no conjunto do a
            pai[pai_b] = pai_a;
            card[pai_a] += card[pai_b];
        } else {
            // conect conjunto do a no conjunto do b
            pai[pai_a] = pai_b;
            card[pai_b] += card[pai_a];
        }    
    }
};

int main(){
    int n;
    char op;
    int a, b;
    // criar um conjunto de n elementos 
    scanf("%d %d", &n, &k);

    // estado inicial
    for(int i = 1; i <= n; i++){
        pai[i] = i;
        card[i] = 1;
    }

    // vamos ter que executar k vezes -> 10^5
    while (k--){
        getchar();
        scanf("%c %d %d", &op, &a, &b);
        if (op == 'C') {
            
        }
        
    }

    // consultas
    if (same_sets(2, 3)) {
        printf("S");
    } else {
        printf("N");
    }
}