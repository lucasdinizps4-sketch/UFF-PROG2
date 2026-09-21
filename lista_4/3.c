// O que será impresso na tela pelo seguinte programa?

int main(void) {
    int numbers[5]; // Cria um vetor de tamanho 5
    int *p; // Inicializa um ponteiro
    int n;

    p = numbers;  // Mesma coisa que p = &numbers[0], recebe endereço do indice zero do vetor
    *p = 10; // numbers[0]=10
    p++; // Vai para numbers[1]
    *p = 20; // numbers[1]=20
    p = &numbers[2];
    *p = 30; // number[2]=30
    p = numbers + 3; // Mesma coisa que p = &numbers[3]
    *p = 40; // numbers[3]=40
    p = numbers; // p = &numbers[0]
    *(p + 4) = 50; // numbers[4]=50

    for (n = 0; n < 5; n++)
        printf("%d ", numbers[n]); // printa 10, 20, 30, 40 50

    return 0;
}