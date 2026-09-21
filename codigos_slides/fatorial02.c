#include <stdio.h>

int main()
{
    int i;
    int n;
    int f;

    do{
        printf("\nDigite um número não negativo: ");
        scanf("%d",&n);
        f = 1;
        for (i = 1;i<=n;i++){
            f *= i;
        }
        printf("Fatorial de %d é : %d", n,f);


    }while(n>=0);

    return 0;
}

/*Seria melhor usar um while*/
