#include <stdio.h>

void troca(int *pa , int *pb);

int main(){
    int a = 10, b = 20;
    troca(&a,&b);
    printf(" a=%d  b=%d",a,b);
}

void troca(int *pa, int *pb){
    int temp = *pb;
    *pb = *pa;
    *pa = temp;
}