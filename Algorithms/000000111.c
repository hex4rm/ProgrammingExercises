#include <stdio.h>
#define X 8
#define Y 5

int main(){

    int IdadeAlunos[X], Disciplinas[Y], QuantidadeProvas[X][Y];

    for(int i = 0; i < X; i++){
        scanf("%d",&IdadeAlunos[i]);
    }
    for(int i = 0; i < Y; i++){
        scanf("%d",&Disciplinas[i]);
    }
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d",&QuantidadeProvas[i][j]);
        }
    }

    return 0;
}