#include <stdio.h>
#include <math.h>

int main(void){
    int a,b,c,delta;
    float x1,x2;

    printf("Qual valor de a b c?: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a==0){
        printf("O coeficiente a nao pode ser zero!");
        return 1;
    }

    delta = (b*b) - (4*a*c);

    if (delta < 0){
        printf("A equacao nao possui raizes reais! Delta = %d",delta);
        return 1;
    }else if (delta >=0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("Raiz x1 = %.2f\nRaiz x2 = %.2f\n",x1,x2);
    }
    return 0;
}