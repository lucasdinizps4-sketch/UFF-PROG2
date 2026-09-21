#include <stdio.h>

void inv(int *vet, int n1, int *n2) { // receber vetor, um inteiro n1 e ponteiro de n2
    int i;
    for (i=0; i < 5; i++)
        vet[i]=vet[i]+i; // soma os indices + i (v[0] = 2 etc...)
    *n2 = *n2 + i; // somando ponteiro mais i, PORÉM não está no laço for, logo i vale 5.
    n1 = n1 + 2; 
}

main() {
    int vetor[5]={2, 4, 6, 8, 10};
    int n1=0, n2=1;
    int *ptr;
    ptr = &vetor[2]; // ptr = 6
    inv(vetor, n1, &n2);
    printf("\n%d", *ptr * 2); // na função inv o vetor[2] vira 8, logo ptr * 2 = 16
    printf("\n%d", vetor[2]); // printa 8
    printf("\n%d", n1); // printa 0 
    printf("\n%d", n2); // 6
}