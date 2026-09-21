#include <stdio.h>
#include <stdlib.h>

int negativos(int n, float *vetor);

int main (void){
    int n,i;
    float *v;

    printf("Qual tamanho do vetor?: ");
    scanf("%d",&n);

    v = (float *) malloc(n*sizeof(float));

    if (v==NULL){
        printf("Falta de memória!\n");
        exit(1);
    }

    for (i=0;i<n;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%f",&v[i]);
    }

    printf("Quantidade de negativos no vetor: %d",negativos(n,v));

    free(v);

    return 0;
}

int negativos(int n,float *vetor){
    int i,count = 0;

    for (i=0;i<n;i++){
        if (vetor[i] < 0){
            count += 1;
        }
    }
    return count;

}