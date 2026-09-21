#include <stdio.h>

int main()
{
    int total_seg,horas,minutos,segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total_seg);
    
    horas = total_seg / 3600;
    minutos = (total_seg % 3600) / 60;
    segundos = total_seg % 60;

    printf("%d Segundos correspondente a, %d hora, %d minutos e %d segundos.\n", total_seg, horas, minutos, segundos);

    return 0;


}
