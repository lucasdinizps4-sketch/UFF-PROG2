#include <stdio.h> 
#include <stdlib.h>

media(int n,float *v);

int main(){
    int i,n;
    float *v,med;
    scanf("%d",&n);

    v = (float *) malloc(n*sizeof(float));

    if (v==NULL){
        printf("Memoria insuficiente");
        exit(1);

    }

    for (i=0;i<n;i++){
        scanf("%f",v[i]);
    }

    med = media(n,v);
    printf("Media = %f",med);

    free;
}

media(int n,float *v){
    int i;
    float soma = 0.0;

    for (i=0;i<n;i++){
        soma += v[i];
    }

    return soma / n;
}