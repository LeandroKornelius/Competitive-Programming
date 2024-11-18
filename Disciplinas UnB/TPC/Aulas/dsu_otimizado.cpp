// Problemas -> OBI Fusao e Codeforces 277A (a fazer)

#include<bits/stdc++.h>

using namespace std;

class DSU {
    vector<int> parent;
    vector<int> card;

    public: 
        /*
        Construtor para classe DSU
        Inicializa tamanhos dos vetores, em que:
        para os parents coloca os seus representantes sendo os proprios elementos 
        enquanto para a cardinalidade começa todos com um 
        */
        DSU(int n): parent(n + 1), card(n + 1, 1)
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
        }
};

int main(){

    // Cria 5 conjuntos contendo 1 elemento cada: {1}, {2}, {3}, {4} e {5}
    DSU conj(5);
    
    conj.join_sets(2,3);
    conj.join_sets(1,3);
    
    if(conj.same_set(1,2))
        printf("1 e 2 estão no mesmo conjunto.\n");
    else
        printf("1 e 2 NÃO estão no mesmo conjunto.\n");
    
    conj.join_sets(5,4);
    
    if(conj.same_set(2,4))
        printf("2 e 4 estão no mesmo conjunto.\n");
    else
        printf("2 e 4 NÃO estão no mesmo conjunto.\n");
    
    printf("Representante do conjunto que contém 4: %d\n",conj.find_set(4));
    
    printf("Representante do conjunto que contém 2: %d\n",conj.find_set(2));
    
    printf("Representante do conjunto que contém 1: %d\n",conj.find_set(1));

    return 0;
}