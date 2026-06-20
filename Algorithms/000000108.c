#include <stdio.h>
#define X 6
#define Y 4

int main()
{

    int M[Y][X], N[X][Y], O[Y][Y];

    for (int i = 0; i < Y; i++)
    {
        for (int j = 0; j < X; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &N[i][j]);
        }
    }

    for (int i = 0; i < Y; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            O[i][j] = 0;
            for (int k = 0; k < X; k++)
            {
                O[i][j] += M[i][k] + N[k][j];
            }
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < Y; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%d ", O[i][j]);
        }
        printf("\n");
    }

    return 0;
}