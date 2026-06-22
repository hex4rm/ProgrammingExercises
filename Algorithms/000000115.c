#include <stdio.h>
#include <math.h>
#define X 3
#define Y 4

int main()
{

    int Mat[X][Y], MaiorDaLinha;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    for (int i = 0; i < X; i++)
    {
        MaiorDaLinha = 0;
        for (int j = 0; j < Y; j++)
        {
            for (int k = 0; k < Y; k++)
            {
                if (abs(Mat[i][k]) > MaiorDaLinha)
                {
                    MaiorDaLinha = abs(Mat[i][k]);
                }
            }
            printf("%.2f\t", (float)Mat[i][j] / (float)MaiorDaLinha);
        }
        printf("\n");
    }

    return 0;
}