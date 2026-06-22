#include <stdio.h>
#define X 2
#define Y 3

int main()
{

    int Mat[X][Y], Quant = 0;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Mat[i][j]);
            if (Mat[i][j] < 5 || Mat[i][j] > 15)
                Quant++;
        }
    }
    printf("%d\n", Quant);

    return 0;
}