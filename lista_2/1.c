#include <stdio.h>
#define PI 3.14159265
void calc_circulo(float r, float *circunferencia, float *area);

int main(){
    float r,area,circuf;
    printf("Diga o raio do circulo: \n");
    scanf("%f",&r);

    calc_circulo(r,&circuf,&area);

    printf("Area = %.2f\n",area);
    printf("\nCircunferencia = %.2f\n",circuf);

    return 0;
}

void calc_circulo(float r, float *circunferencia, float *area){
    *circunferencia = 2*PI*r;
    *area = PI*(r*r);
}