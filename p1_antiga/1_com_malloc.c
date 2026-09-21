#include <stdio.h>
#include <stdlib.h>

int pares(int n, int *vet);

int main(){
    int i,n,*v;

    printf("Digite o numero de elementos do vetor: ");
    scanf("%d",&n);

    v = (int *) malloc(n*sizeof(int));

    if (v==NULL){
        printf("Memoria insuficiente!");
        exit(1);
    }

    for (i=0;i<n;i++){
        printf("Digite o elemento %d",i+1);
        scanf("%d",&v[i]);
    }

    printf("Total de pares = %d",pares(n,v));

    free(v);

    return 0;
}


int pares(int n,int *vet){
    int i, count_par = 0;

    for (i=0;i<n;i++){
        if (vet[i] % 2 == 0){
            count_par += 1;
        }
    }
    return count_par;
}