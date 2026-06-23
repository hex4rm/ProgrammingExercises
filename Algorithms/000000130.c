#include <stdio.h>

int VerificaPositivo(int a){
    if(a > 0)
        printf("Positivo\n");
    else if(a < 0)
        printf("Negativo\n");
}

int main(){

    int a;
    scanf("%d",&a);
    VerificaPositivo(a);

    return 0;
}