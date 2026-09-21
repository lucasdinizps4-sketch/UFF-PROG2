/* Calculo media e da variancia*/

#include <stdio.h>
#define MAX 10

void criar_lista(int n,float *v);
float media(int n,float *v);
float variancia(int n,float *v, float m);

int main(){
    float v[MAX];
    float med,var;

    /*Entrada de dados*/
    printf("Leitura dos %d elementos\n",MAX);
    criar_lista(MAX,v);

    /*Processamento*/
    med = media(MAX,v);
    var = variancia(MAX,v,med);

    /*Saida*/
    printf("\nMedia = %.2f",med);
    printf("\nVariancia = %.2f", var);

    return 0;

}

void criar_lista(int n,float *v){
    int i;
    for (i=0;i<n;i++){
        printf("\nDigite o %d numero: ", i+1);
        scanf("%f", &v[i]);
    }
}

float media(int n,float *v){
    int i;
    float s = 0.0f;

    for (i=0;i<n;i++){
        s += v[i];
    }
    return s / n;
}

float variancia(int n,float *v,float m){
    int i;
    float s = 0.0f;

    for (i=0;i<n;i++){
        s += (v[i]-m) * (v[i]-m);
    }
    return s/n;

}

