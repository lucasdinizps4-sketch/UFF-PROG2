#include <stdio.h>

float  calcular_media(float p1,float p2,float p3)
{
    return (p1+p2+p3)/3.0;
}


int main()
{
    float p1,p2,p3,media;


    do{
        printf("Digite as 3 notas: ");
        scanf("%f %f %f",&p1,&p2,&p3);

        if (p1 < 0 || p1 > 10 ||
            p2 < 0 || p2 > 10 ||
            p3 < 0 || p3 > 10){
                printf("Uma ou mais notas invalidas, tente novamente!\n");
            }

    } while(p1 < 0 || p1 > 10 ||
            p2 < 0 || p2 > 10 ||
            p3 < 0 || p3 > 10);

    media = calcular_media(p1,p2,p3);
    printf("Media: %f",media);

    if (media>=6.0){
        printf("Aprovado!");
    }
    if (media >=4.0 && media <= 5.9 ){
        printf("VS!");
    }
    else
        printf("Reprovado!\n");

}

/*Invés de criar um do while gigante, eu poderia criar uma função ler_nota

float ler_nota(int numero_prova) {
    float nota;
    do {
        printf("Digite a nota da P%d (0.0 a 10.0): ", numero_prova);
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota inválida! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    return nota;
}

int main() {
    float p1, p2, p3, media;

    /Leitura com validação individual
    p1 = ler_nota(1);
    p2 = ler_nota(2);
    p3 = ler_nota(3);


*/