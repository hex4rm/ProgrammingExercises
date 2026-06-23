#include <stdio.h>

int ConverteParaSegundos(int Horas, int Minutos, int Segundos){
    return (Horas * 60 * 60) + (Minutos * 60) + Segundos;
}

int main(){
    
    int H,M,S;
    scanf("%d",&H);
    scanf("%d",&M);
    scanf("%d",&S);
    S = ConverteParaSegundos(H,M,S);
    printf("%d Segundos\n",S);

    return 0;
}