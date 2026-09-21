#include <stdio.h>

int fat (int n); // Neste código inverti a ordem, desta vez declarei o prototipo, fiz a main e depois fiz a função. Ambos casos funcionam, porém esta maneira é mais organizada pois a main fica no topo do código

int main() 
{
    int n,r;
    printf("Digite um numero nao negativo: ");
    scanf("%d", &n);
    r = fat(n);
    printf("Fatorial de %d = %d\n", n, r);
    return 0;

}

int fat(int n)
{
    int i;
    int fatorial = 1;
    for (i=1;i<=n;i++)
        fatorial*=i;
    return fatorial;
} 