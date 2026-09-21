#include <stdio.h>

int main()
{
    int n1,n2,n3,maior,menor;
    float media;

    printf("Digite o primeiro valore inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo valore inteiro: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valore inteiro: ");
    scanf("%d",&n3);

    maior = n2;
    menor = n1;

    if (n1>maior) maior = n1;
    if (n3>maior) maior = n3;

    if (n2<menor) menor = n2;
    if (n3<menor) menor = n3;

    media = n1+n2+n3/3.0;

    printf("\nMédia de %d, %d, %d é = %.2f\n", n1,n2,n3,media);

    printf("\nMaior valor: %d\n",maior);

    if (n1 % 2 == 0);
    {
        printf("\nValor par: %d\n", n1);
    }

    if (n2 % 2 == 0);
    {
        printf("Valor par: %d\n", n2);
    }

    if (n3 % 2 == 0);
    {
        printf("Valor par: %d\n", n3);

    }

    return 0;

}