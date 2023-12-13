#include<bits/stdc++.h>
using namespace std;

#define ll long long

int n;
vector<int> valores;
int tabela[1000005];

int dp(int k) {
    if (k == 0) {
        return 0;
    }

    if (tabela[k] != -1) {
        return tabela[k];
    }

    int melhor = INT_MAX;

    for (int i = 0; i < valores.size(); i++) {
        if (k - valores[i] >= 0) {
            int recurs = dp(k - valores[i]);
            melhor = min(melhor, recurs + 1);
        }
    }

    return tabela[k] = melhor;
}

// ACCEPTED
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    fill(tabela, tabela + 1000005, -1);

    cin >> n;

    // Obtendo quase-binários até n
    for (int i = 1; i <= n; i++) {
        bool qBin = true;
        string numStr = to_string(i);
        for (char digit : numStr) {
            if (digit != '0' && digit != '1') {
                qBin = false;
                break;
            }
        }
        if (qBin) {
            valores.push_back(i);
        }
    }

    int result = dp(n);

    cout << result << endl;

    int soma = n;
    while (soma > 0) {
        bool tem = false;
        for (int i = 0; i < valores.size(); i++) {
            // faz um check se aquele num qBin eh um possivel passo pro min de ops pro n
            if (soma - valores[i] >= 0 && tabela[soma - valores[i]] == tabela[soma] - 1) {
                cout << valores[i] << " ";
                soma -= valores[i];
                tem = true;
                break;
            }
        }
        if (!tem) {
            break;
        }
    }

    cout << soma << " ";


    return 0;
}
