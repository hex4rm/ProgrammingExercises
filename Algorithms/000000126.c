#include <stdio.h>

int SomaAteN(int N){

    int Soma = 0;
    for(int i = 0; i <= N; i++){
        Soma += i;
    }
    return Soma;
}

int main(){

    int N, Resultado;
    scanf("%d",&N);
    Resultado = SomaAteN(N);
    printf("%d\n",Resultado);

    return 0;
}