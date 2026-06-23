#include <stdio.h>

int SomaDivisores(int N){
    int Raiz, Soma = 0;

    for(int i = 1; i <= N; i++){
        if(N % i == 0)
            Soma += i;
    }

    return Soma;

}

int main(){

    int N, Resultado;
    scanf("%d",&N);
    Resultado = SomaDivisores(N);
    printf("%d\n",Resultado);

    return 0;
}