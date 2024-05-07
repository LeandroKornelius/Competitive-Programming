#include <bits/stdc++.h>
using namespace std;

int contador = 0;

void merge(int v[], int temp[], int inicio, int meio, int fim) {
    int i, j, k;

    i = inicio;
    j = meio;
    k = inicio;

    while ((i <= meio - 1) && (j <= fim)) {
        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else {
            temp[k++] = v[j++];
            contador += (meio - i);
        }
    }

    while (i <= meio - 1)
        temp[k++] = v[i++];

    while (j <= fim)
        temp[k++] = v[j++];

    for (i = inicio; i <= fim; i++)
        v[i] = temp[i];
}

void mergeSort(int v[], int temp[], int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;

        mergeSort(v, temp, inicio, meio);
        mergeSort(v, temp, meio + 1, fim);

        merge(v, temp, inicio, meio + 1, fim);
    }
}

int main() {
    int n;
    cin >> n;
    int v[n];
    int temp[n];


    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mergeSort(v, temp, 0, n - 1);

    if (contador % 2 == 0) {
        cout << "Carlos";
    } else {
        cout << "Marcelo";
    }

    return 0;
}
