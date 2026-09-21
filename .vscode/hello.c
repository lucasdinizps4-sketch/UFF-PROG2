#include <stdio.h>

/* Função auxiliar: Converte Celsius para Fahrenheit */
float converte(float c) {
    float f = 1.8f * c + 32.0f;
    return f;
}

/* Função principal */
int main(void) {
    float t1;
    float t2;

    /* Mostra mensagem para o usuário */
    printf("Digite a temperatura em Celsius: ");

    /* Captura valor de entrada via teclado */
    scanf("%f", &t1);

    /* Converte o valor chamando a função auxiliar */
    t2 = converte(t1);

    /* Exibe o resultado com 2 casas decimais */
    printf("Temperatura em Fahrenheit: %.2f\n", t2);

    return 0;
}