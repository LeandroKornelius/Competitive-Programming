/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0258 - Tópicos Especiais em Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Strings
 * Objetivo: Implementação do Algoritmo Z para encontrar a maior substring que eh um prefixo
 *           da string de entrada
 *
 * Compilar no terminal: g++ z_algorithm.cpp -std=c++17 -o zfunc
 * Executar: ./zfunc
 */

#include<bits/stdc++.h>

using namespace std;

int* zarray_naive(char *str, int n){
    
    int k;
    int *z = (int *) malloc(sizeof(int)*n);
    
    for(int i = 1; i < n; i++){
        k = 0;
        
        while(i+k < n and str[i+k] == str[k])
            k++;
        z[i] = k;
    }
    
    return z;
}

int* z_function(char *str, int n){
    
    int k;
    int *z = (int *) malloc(sizeof(int)*n);
    
    int l,r;
    l = 0;
    r = 0;
    for(int i = 1; i < n; i++){
        if(i > r){
            l = r = i;
        
            while(r < n and str[r-l] == str[r])
                r++;
            z[i]=r-l;
            r--;
        }
        else{
            k = i - l;
            if(z[k] < r - i +1)
                z[i] = z[k];
            else{
                l = i;
                while(r < n and str[r-l] == str[r])
                    r++;
                z[i] = r - l;
                r--;
            }
        }
    }
    
    return z;
}

// From CpAlgorithms, found it easier to use since it returns the z vector
vector<int> z_function_cp(string s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

int main(){

    char string[10] = "aabaabaa";
    vector<int> z;
    int n;
    int *z1,*z2;
    
    n = strlen(string);
    
    z1 = zarray_naive(string,n);
    
    for(int i = 0; i < n; i++){
        printf("%d ",z1[i]);
    }
    printf("\n");
    
    z2 = z_function(string,n);
    
    for(int i = 0; i < n; i++){
        printf("%d ",z2[i]);
    }
    printf("\n");
    
    free(z1);
    free(z2);
    
    return 0;
}