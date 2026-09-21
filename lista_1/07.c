#include <stdio.h>
#include <math.h>

int main(void){
    float n1;
    int direcao;

    printf("Digite o valor de n1: ");
    scanf("%f",&n1);
    printf("Você deseja arredondar pra cima ou pra baixo? (1 ou 0): ");
    scanf("%d",&direcao);

    switch(direcao)
    {
        case 1: printf(" = %f\n", ceil(n1)) ; break;
        case 0: printf(" = %f\n", floor(n1)); break;
    }
    return 0;
}