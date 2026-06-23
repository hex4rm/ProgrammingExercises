#include <stdio.h>
#define X 5

int main(){

    float Mat[X][X], SomaDiS = 0;

    for(int i = 0; i < X; i++){
        for(int j = 0; j < X; j++){
            scanf("%f",&Mat[i][j]);
            if(i + j == X -  1)
                SomaDiS += Mat[i][j];
        }
    }

    printf("Soma dos elementos da diagonal secundaria: %.1f\n",SomaDiS);

    return 0;
}