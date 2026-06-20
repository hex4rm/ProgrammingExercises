#include <stdio.h>
#define X 5
#define Y 5

int main(){

    int Mat[X][Y], Soma = 0;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d",&Mat[i][j]);
        }
    }

    for(int i = 0; i < Y; i++){
        Soma += Mat[4][i];
    }

    printf("Soma dos Elementos da Linha 4: %d\n",Soma);
    Soma = 0;

    for(int i = 0; i < X; i++){
        Soma += Mat[i][2];
    }

    printf("Soma dos Elementos da Coluna 2: %d\n",Soma);
    Soma = 0;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            if(i == j)
                Soma += Mat[i][j];
        }
    }

    printf("Soma dos elementos da diagonal principal: %d\n",Soma);
    Soma = 0;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            if( i + j == X-1)
                Soma += Mat[i][j];
        }
    }

    printf("Soma dos elementos da diagonal secundaria: %d\n",Soma);
    Soma = 0;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            Soma += Mat[i][j];
        }
    }
    printf("Soma dos elementos da matriz: %d\n",Soma);

    return 0;
}