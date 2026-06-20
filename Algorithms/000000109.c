#include <stdio.h>
#define X 3
#define Y 8

int main(){

    int M[X][Y], N[X][Y], Soma[X][Y], Diferenca[X][Y];

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d",&M[i][j]);
        }
    }

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d",&N[i][j]);
        }
    }

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            Soma[i][j] = M[i][j] + N[i][j];
            Diferenca[i][j] = M[i][j] - N[i][j];
        }
    }

    printf("MATRIZ RESULTANTE DA ADICAO:\n");
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    printf("MATRIZ RESULTANTE DA SUBTRACAO:\n");
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            printf("%d ",N[i][j]);
        }
        printf("\n");
    }

    return 0;
}