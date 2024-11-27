#include<bits/stdc++.h>
using namespace std;

class DSU
{
    vector<int> parent;
    vector<int> card;
    
public:
    DSU(int n): parent(n+1), card(n+1,1)
    {
        for(int i = 1; i <= n; i++)
            parent[i] = i;
    }

    /* O(log n) */
    int find_set(int x)
    {
        if(x == parent[x])
            return x;
        
        return parent[x] = find_set(parent[x]);
    }

    bool same_set(int a, int b)
    {
        return find_set(a) == find_set(b);
    }

    /* O(log n) */
    void join_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        
        if(card[a] < card[b])
            swap(a,b);
        
        card[a] += card[b];
        parent[b] = a;
    }
};

int main() {
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int n,k;

    while(t--){
        cin >> n >> k;
        int falses =0;

        // dsu will have the element, n indexes later, who eats that element, 2n indexes later who that element eats
        DSU dsu(3*n);

        int op, x, y;
    
        for(int i = 0; i < k; i++){
            cin >> op >> x >> y;
        
        // A eats B that eats C that eats A
        int eatsX, eatsY, eeatsX, eeatsY;

        eatsX = x+n;
        eeatsX = x+2*n;

        eatsY = y+n;
        eeatsY = y+2*n;

        // In bounds check
        if(x > n or y > n){
            falses ++;
            continue;
        }

        if(op == 1){
            if(dsu.same_set(eatsX,y) or dsu.same_set(eeatsX,y)){
                falses ++;
            }else{
                // X and Y are the same, meaning they eat and get eaten by the same animal
                dsu.join_sets(x,y);
                dsu.join_sets(eatsX,eatsY);
                dsu.join_sets(eeatsX,eeatsY);
            }
        } else{
            if((dsu.same_set(x,y)) or (dsu.same_set(eeatsX,y))){
                falses ++;
            }
            else{
                // X eats Y, meaning that I must unite the unions for who eats and gets eaten
                dsu.join_sets(eatsX,y);
                dsu.join_sets(eeatsY,x);
                dsu.join_sets(eeatsX,eatsY);
            }
        }

        }
        cout << falses << endl;
    }
    return 0;
}