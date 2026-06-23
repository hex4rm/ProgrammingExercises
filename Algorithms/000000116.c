#include <stdio.h>
#define X 5
#define Y 5

int main()
{

    int Mat[X][Y], VetC[X], VetL[Y];

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    for (int i = 0; i < X; i++)
    {
        VetL[i] = 0;
        for (int j = 0; j < X; j++)
        {
            VetL[i] += Mat[i][j];
        }
    }

    for (int i = 0; i < X; i++)
    {
        VetC[i] = 0;
        for (int j = 0; j < X; j++)
        {
            VetC[i] += Mat[j][i];
        }
    }

    printf("\n=================================\n");

    printf("Vetor de soma das colunas:\n");

    for (int i = 0; i < X; i++)
    {
        printf("%d ", VetC[i]);
    }

    printf("\n=================================\n");

    printf("Vetor de soma das linhas:\n");
    for (int i = 0; i < X; i++)
    {
        printf("%d ", VetL[i]);
    }

    return 0;
}