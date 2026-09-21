/* Calculo de media de numeros reais*/

#include <stdio.h>

int main(){
    float nota, med = 0.0f;
    int i,n;

    printf("Quantas notas voce quer ler: ");
    scanf("%d",&n);

    if (n>0){
        for (i=0;i<n;i++){
            printf("Digite a nota %d: ", i+1);
            scanf("%f",&nota);
            med += nota;
        
        }
    med = med / n;
    printf("Media = %f \n",med);
    }else{
        printf("Erro, divisao por zero!");
    }
    return 0;

}