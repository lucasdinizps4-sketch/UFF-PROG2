#include <stdio.h>
#define MAX 10

int pares(int n, int *vet);

int main(void){
    int v[MAX];
    int i,n_pares;
    for (i=0;i<MAX;i++){
        printf("Digite o numero %d",i+1);
        scanf("%d",&v[i]);
    }

    n_pares = pares(MAX,v);
    printf("Numero de pares = %d",n_pares);
    return 0;

}

int pares(int n,int *vet){
    int count_par = 0;
    int i;

    for (i=0;i<n;i++){
        if (vet[i] % 2 == 0){
            count_par += 1;
        }
    }
    return count_par;
}