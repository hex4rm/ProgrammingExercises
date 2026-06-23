#include <stdio.h>
#define X 8
#define Y 6
#define Z X / 2

int main()
{

    int Mat[X][Y], Pos = 0;
    float Soma = 0, MParL[Z], MediaElementos;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }

    for (int i = 0; i < X; i++)
    {
        if (i % 2 == 0)
        {
            MParL[Pos] = 0;
            for (int j = 0; j < Y; j++)
            {
                MParL[Pos] += Mat[i][j];
            }
            MParL[Pos] = MParL[Pos] / Y;
            Pos++;
        }
    }

    for (int i = 0; i < Z; i++)
    {
        printf("%.2f ", MParL[i]);
    }

    return 0;
}