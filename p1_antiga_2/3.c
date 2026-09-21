#include <stdio.h>

void triplo(int *p);

int main(){
    int n;
    printf("Digite valor de n: ");
    scanf("%d",&n);

    triplo(&n);

    printf("Triplo: %d",n);

    return 0;
}

void triplo(int *p){
    *p = *p *3;
}