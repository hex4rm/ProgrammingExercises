#include <stdio.h>

float MediaPositivos(){

    int Quantidade = 0;
    float IO, Soma = 0, Media = 0;

    do{
        scanf("%f",&IO);
        if(IO != 0){
            Soma += IO;
            Quantidade++;
        }
    }while(IO != 0);

    if(Quantidade != 0)
        Media = Soma / Quantidade;

    return Media;
}

int main(){
    float Resultado = MediaPositivos();
    printf("%.1f\n",Resultado);
    return 0;
}