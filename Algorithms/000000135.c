#include <stdio.h>
#include <math.h>

double Somatorio(int N){

    // Função definida: (N^2 + 1 / N + 3) + ...
    double SomatorioS = 0;
    if(N >= 1){
        for(int i = 1; i <= N; i++){
            SomatorioS += ((pow(i,2) + 1.0) / (i+3.0));
        }
    }

    return SomatorioS;
}

int main(){

    int N;
    double SomatorioTotal;

    scanf("%d",&N);
    SomatorioTotal = Somatorio(N);
    printf("Somatorio de 1 ate %d e: %.2lf",N,SomatorioTotal);
}