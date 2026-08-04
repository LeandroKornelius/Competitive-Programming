#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class SegTree{
    vector<pair<int, int>> st;
    vector<int> v;
    int n;
    int elem_neutro = 1e9+7;

public:
    SegTree(int size, vector<int> source): st(4*size,make_pair(-1, -1)), v(size,0)
    {
        n = size;
        for(int i = 0; i < size; i++)
            v[i] = source[i];
    }
    
    pair<int, int> f(pair<int, int> p1, pair<int, int> p2)
    {
        // Condition checks which is the largest of the four numbers
        if (p1.first >= p2.first) {
            return make_pair(p1.first, max(p1.second, p2.first));
        } else {
            // p2.first > p1.first
            return make_pair(p2.first, max(p2.second, p1.first));
        }
    }
    
    void build(int l, int r, int nodo)
    {
        if(l == r)
        {
            st[nodo].first = v[l];
            return ;
        }
        
        int mid = (l+r)/2;
        
        build(l,mid,2*nodo);
        build(mid+1,r,2*nodo+1);
        
        st[nodo] = f(st[2*nodo],st[2*nodo+1]);
    }
    
    void update_range(int i, int value, int l, int r, int nodo)
    {
        if(l == r)
        {
            st[nodo].first = value;
            st[nodo].second = -1;
            return ;
        }
        
        int mid = (l+r)/2;
        if(i <= mid)
            update_range(i, value, l, mid, 2*nodo);
        else
            update_range(i, value, mid+1, r, 2*nodo+1);
        
        st[nodo] = f(st[2*nodo],st[2*nodo+1]);
    }

    void update(int i, int x)
    {
        int l = 0;
        int r = n-1;
        int nodo = 1;
        update_range(i,x,l,r,nodo);
    }

    pair<int, int> query_range(int ql, int qr, int l, int r, int nodo)
    {
        
        if(l > qr or r < ql)
        {
            return make_pair(-1, -1);
        }
        
        if(l >= ql and r <= qr)
        {
            return st[nodo];
        }
        
        int mid = (l+r)/2;
        pair<int, int> p_esq = query_range(ql,qr,l,mid,2*nodo);
        pair<int, int> p_dir = query_range(ql,qr,mid+1,r,2*nodo+1);
        return f(p_esq,p_dir); 
    }

    pair<int, int> query(int ql, int qr)
    {
        int l = 0;
        int r = n-1;
        int nodo = 1;
        return query_range(ql,qr,l,r,nodo);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int aux;
        cin >> aux;
        nums.push_back(aux);
    }

    SegTree st(n, nums);
    st.build(0, n-1, 1);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        char op;
        int x1, x2;
        cin >> op >> x1 >> x2;
        if (op == 'U') {
            st.update(x1 - 1, x2);
        } else if (op == 'Q') {
            pair<int, int> pr = st.query_range(x1 - 1, x2 - 1, 0, n-1, 1);
            cout << pr.first + pr.second << endl;
        }
    }

    return 0;
}