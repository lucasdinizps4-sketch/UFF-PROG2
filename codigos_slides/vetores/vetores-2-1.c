#include <stdio.h>
#define max 10

float media(int n,float *v);
float variancia(int n,float *v,float m);

int main(){
    float v[max];
    float med,var;
    int i;

    printf("Leitura dos %d numeros",max);

    for (i=0;i<max;i++){
        printf("\nDigite o numero %d: ",i+1);
        scanf("%f",&v[i]);
    }

    med = media(max,v);
    var = variancia(max,v,med);

    printf("\nMedia = %.2f \nVariancia = %.2f\n",med,var);

    return 0;

}


float media(int n,float *v){
    int i;
    float s = 0.0f;

    for (i=0;i<n;i++){
        s+=v[i];
    }
    return s/n;
}

float variancia(int n,float *v,float m){
    int i;
    float s = 0.0f;

    for (i=0;i<n;i++){
        s+= (v[i]-m)*(v[i]-m);
    }
    return s/n;
}
