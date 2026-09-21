#include<stdio.h>

int contaPares(int *v,int n);

void main() {
    int vetor[5] = {1, 4, 6, 7, 9};
    int resultado;
    resultado = contaPares(vetor, 5);
    printf("%d", resultado);
}


int contaPares(int *v,int n){
    int count_par = 0;
    int i;

    for (i=0;i<n;i++){
        if (v[i] % 2 == 0){
            count_par+=1;
        }
    }
    return count_par;
}


