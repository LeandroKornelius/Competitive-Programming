#include <bits/stdc++.h>
using namespace std;

class DSU {
    vector<int> parent;
    vector<int> card;

    public: 
        int maxComponent;
        /*
        Construtor para classe DSU
        Inicializa tamanhos dos vetores, em que:
        para os parents coloca os seus representantes sendo os proprios elementos 
        enquanto para a cardinalidade começa todos com um 
        */
        DSU(int n): parent(n + 1), card(n + 1, 1), maxComponent(0)
        {
            for (int i = 1; i <= n; i++) parent[i] = i;
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
                // garante que a variável "a" carrega sempre o representante do conjunto de maior profundiade
                swap(a, b);
            }

            // através do swap garante que a árvore com menor profundidade é acrescentada à de maior otimizando o código
            card[a] += card[b];
            // atribui que o pai de "b" após a união é "a"
            parent[b] = a;
            card[b] = 0;

            maxComponent = max(maxComponent, card[a]);
        }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int aux = n;

    DSU cities = DSU(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if (!cities.same_set(a, b)) {
            aux--;
            cities.join_sets(a, b);
        }
        cout << aux << " " <<  cities.maxComponent << endl;
    }

    return 0;
}