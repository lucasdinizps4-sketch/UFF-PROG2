#include <stdio.h>

int div(int n,int *max,int *min);

int main(){
    int numero,maior,menor,resultado;

    printf("Digite o valor do numero: ");
    scanf("%d",&numero);

    resultado = div(numero,&maior,&menor);

    if (resultado ==0){
        printf("O numero %d e primo",numero);
    }else {
        printf("O numero %d nao e primo! \nMenor divisor: %d \nMaior divisor: %d",numero,menor,maior);
    }
}


int div(int n,int *max,int *min){
    int i,primo = 1;

    for (i=2;i<n;i++){
        if (n%i==0){
          if (primo==1){
            *min = i;
            primo = 0;
          }
          *max = i;
        }
    }

    if (primo == 1){
        return 0;
    }else{
        return 1;
    }
}