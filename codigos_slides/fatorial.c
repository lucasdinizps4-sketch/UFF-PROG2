#include <stdio.h>

int fat_for()
{
    int i;
    int n;
    int fat = 1;

    printf("Escolha um número não negativo: ");
    scanf("%d", &n);

    for (i = 1; i<= n; i++) {
        fat *= i;
    }
    printf("Fatorial de %d é : %d", n,fat);

    return 0;

}

/* Utilizando While*/

int fat_while ()
{
    int i = 1;
    int n;
    int fat =1;

    printf("Escolha um número não negativo: ");
    scanf("%d",n);

    while (i<=n) {
        fat *= i;
        i++;
    }

    printf("Fatorial de %d é : %d", n,fat);
    
}

/* MOSTRAR PARA PATRICK*/