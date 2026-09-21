#include <stdio.h>

float converte(float c)
{
    float f;
    f = 1.8*c + 32;
    return f;
}

int main (void)
{
    float t1;

    printf("Digite a temperatura em celcis: ");
    scanf("%f",&t1);
    printf("Resultado= %f", converte(t1));
    return 0;
}