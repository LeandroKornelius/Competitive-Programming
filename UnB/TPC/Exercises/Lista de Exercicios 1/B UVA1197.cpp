#include<bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> parent;
    vector<int> card;
    vector<int> elements;

    public: 
        /*
        Construtor para classe DSU
        Inicializa tamanhos dos vetores, em que:
        para os parents coloca os seus representantes sendo os proprios elementos 
        enquanto para a cardinalidade começa todos com um 
        */
        DSU(int n): parent(n + 1), card(n + 1, 1)
        {
            for (int i = 0; i <= n; i++) parent[i] = i;
        }

        // Encontra qual o representante de um elemento x qualquer atraves de recursão
        int find_set(int x) {
            if (x == parent[x]) return x;
            return parent[x] = find_set(parent[x]);
        }

        // Verifica se os dois elementos possuem o mesmo representante, ou seja, pertencem ao mesmo conjunto
        bool same_set(int a, int b) {
            return find_set(a) == find_set(b);
        }

        void join_sets(int a, int b) {
            // Encontra representantes de ambos elementos o qual a união deseja ser feita sobre
            a = find_set(a);
            b = find_set(b);

            // Com base neste representante, é necessário olhar qual tem a maior cardinalidade para unir com base nisto 
            if (card[a] < card[b]) {
                // função abaixo muda o valor contido nas duas variáveis
                // garante que a variável "a" carrega sempre o representante do conjunto de maior elementos
                swap(a, b);
            }

            // através do swap garante que a árvore com menor elementos é acrescentada à de maior otimizando o código
            card[a] += card[b];
            // atribui que o pai de "b" após a união é "a"
            parent[b] = a;
        }

        int find_card(int a) {
            int aux = find_set(a);
            return card[aux];
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    cin >> n >> m;
    while (!((n == 0) && (m == 0))) {
        DSU dsu(n);
        int k;
        for (int i = 0; i < m; i++) {
            cin >> k;
            if (k > 0) {
                int first, aux;
                cin >> first;
                for (int j = 1; j < k; j++) {
                    cin >> aux;
                    if (!dsu.same_set(first, aux)) {
                        dsu.join_sets(first, aux);
                    }
                }
            }
        }
        cout << dsu.find_card(0) << '\n';        
        cin >> n >> m;
    }

    return 0;
}