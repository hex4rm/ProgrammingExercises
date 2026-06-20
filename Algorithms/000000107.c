#include <stdio.h>
#define X 20
#define Y 10

int main()
{

    int Mat[X][Y], Vet[Y];

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    for (int i = 0; i < Y; i++)
    {
        Vet[i] = 0;
        for (int j = 0; j < X; j++)
        {
            Vet[i] += Mat[j][i];
        }
    }

    for(int j = 0; j < Y; j++){
        for(int i = 0; i < X; i++){
            printf("%d ",Mat[i][j] * Vet[j]);
        } 
        printf("\n");
    }

    return 0;
}