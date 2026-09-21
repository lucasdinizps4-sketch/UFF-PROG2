// Variavel constante

#define PI 3.14159F // #define NOME VALOR  ----- Não é possível alterar valor de PI

float area(float r){
    float a = PI *r *r;
    return a;
}


// Macro
#include <stdio.h>
#define MAX(a,b) ((a) > (b) ? (a):(b)) // envolva cada parâmetro, além da macro como um todo, entre parênteses

int main(){

float v = 4.5;
float c = MAX(v,3.0);

printf("O maior valor é %2f\n", c);
return 0;

}

#define DIF(a,b) ((a) - (b)) // Se a e b não fossem envolvividos por parênteses, daria outro resultado (4 * 5 - 3). Logo ele faria primeiro o produto

int main(){
    printf(" %d ", 4 * DIF(5,3));
}