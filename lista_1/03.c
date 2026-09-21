#include <stdio.h>

int main()
{
    char op;
    float n1,n2;

    printf("Escolha dois números: ");
    scanf("%f %f", &n1,&n2);

    printf("Qual operacao voce quer fazer? (+, -, * , /): ");
    scanf(" %c",&op);

    switch(op)
    {
        case '+': printf(" = %f\n", n1+n2) ; break;
        case '-': printf(" = %f\n", n1-n2); break;
        case '*': printf(" = %f", n1*n2); break;
        case '/': printf(" = %f\n", n1/n2); break;
    }
    return 0;

}


 