#include <stdio.h>
#define N 10

int main(){

    int Mat[N][N], SomaDiP = 0, Elementos = 0;
    float Media;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j< N; j++){
            scanf("%d",&Mat[i][j]);
            if(i == j){
                SomaDiP += Mat[i][j];
                Elementos++;
            }
        }
    }

    Media = (float) SomaDiP / (float) Elementos;
    printf("Media dos numeros da diagonal principal: %.2f",Media);

    return 0;
}

// 2 + 8 + 4 + 6 + 35 = 45 / 5