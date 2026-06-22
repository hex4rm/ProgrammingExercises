#include <stdio.h>
#define X 6
#define Y 4

int main()
{

    int Mat[X][Y], MaiorDaMatriz;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    MaiorDaMatriz = Mat[0][0];

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            if (Mat[i][j] > MaiorDaMatriz)
                MaiorDaMatriz = Mat[i][j];
        }
    }

    printf("========================================\n");
    printf("Matriz Digitalizada:\n");
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%d\t", Mat[i][j]);
        }
        printf("\n");
    }

    printf("========================================\n");
    printf("Matriz Resultante:\n");
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%d\t", Mat[i][j] * MaiorDaMatriz);
        }
        printf("\n");
    }

    return 0;
}