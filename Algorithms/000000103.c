#include <stdio.h>
#define X 2 
#define Y 4

int main(){

    int Elemento[X][Y], QntCadaLinha, SomaPares = 0, QntPares = 0;
    float MediaPares;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d",&Elemento[i][j]);
        }
    }

    for(int i = 0; i < X; i++){
        QntCadaLinha = 0;
        for(int j = 0; j < Y; j++){
            if(Elemento[i][j] >= 12 && Elemento[i][j] <= 20)
                QntCadaLinha++;
            if(Elemento[i][j] % 2 == 0){
                SomaPares += Elemento[i][j];
                QntPares++;
            }
        }
        printf("Quantidade de elementos entre 12 e 20 na Linha %d: %d\n",i,QntCadaLinha);
    }

    MediaPares = (float) SomaPares / (float) QntPares;
    printf("Media dos pares da matriz: %.1f",MediaPares);

    return 0;
}