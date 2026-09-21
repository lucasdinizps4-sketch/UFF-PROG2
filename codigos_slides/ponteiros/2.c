#include <stdio.h>

void troca(int a,int b);

int main(){
    int a=10, b=20;
    troca(a,b);
    printf(" a=%d  b+%d",a,b);
}

// Não vai funcionar pois a função só vai alterar as copias, quando função terminar as copias são destruidas
void troca(int a,int b){
    int temp = b;
    b = a;
    temp = b;
}

// conntinua no arquivo 3