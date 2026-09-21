#include <stdio.h>

int total_notas(int valor);

int main(void){
    int reais, resultado;

    printf("Qual a wuantia em reais?: ");
    scanf("%d",&reais);

    resultado = total_notas(reais);

    printf("Menor numeros de notas para completar %d reais: %d ",reais,resultado);

    return 0;
}

int total_notas(int valor){
    int cedulas[]={100,50,20,10,5,2,1};
    int i;
    int total = 0;

    for (i=0;i<7;i++){
        total += valor / cedulas[i]; 
        valor %= cedulas[i]; // valor % cedulas[i] + valor
    }
    return total;
}