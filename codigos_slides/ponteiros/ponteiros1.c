#include <stdio.h>

int main(){
    int a, *p = &a; // Podemos inicializar assim desde que respeitemos a ordem da esquerda pra direita
    // Caso fizessemos *p = 2 sem declarar endereço, ele guardaria 2 em um espaço de memoria desconhecido
    *p = 2; 
    printf("%d", a);
    return 0;
}