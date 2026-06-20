#include <stdio.h>
#define X 6
#define Y 3

int main(){

    int Elemento[X][Y], 
    Maior, MaiorX, MaiorY,
    Menor, MenorX, MenorY;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d",&Elemento[i][j]);
        }
    }

    Maior = Elemento[0][0];
    MaiorX = 0;
    MaiorY = 0;
    Menor = Elemento[0][0];
    MenorX = 0;
    MenorY = 0;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            if(Elemento[i][j] > Maior){
                Maior = Elemento[i][j];
                MaiorX = i;
                MaiorY = j;
            }
            if(Elemento[i][j] < Menor){
                Menor = Elemento[i][j];
                MenorX = i;
                MenorY = j;
            }
        }
    }

    printf("Maior Elemento da Matriz: %d - [Linha: %d] [Coluna: %d]\n",Maior,MaiorX,MaiorY);
    printf("Menor Elemento da Matriz: %d - [Linha: %d] [Coluna: %d]\n",Menor,MenorX,MenorY);

    return 0;
}