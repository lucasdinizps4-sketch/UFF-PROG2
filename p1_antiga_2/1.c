#include <stdio.h>
#include <stdlib.h>
float* cria_le(int n);

void main(){
    float *vetor;
    vetor = cria_le(20);
}

float* cria_le(int n){
    int i;
    float *v;

    v =(float*) malloc(n * sizeof(float));

    if (v== NULL){
        printf("Erro: Memoria insuficiente!");
        exit(1);

    }

    for (i=0;i<n;i++){
        printf("Digite numero %d",i+1);
        scanf("%f",&v[i]);

    }

    return v;
}