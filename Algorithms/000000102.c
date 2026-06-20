#include <stdio.h>
#define X 3
#define Y 5

int main()
{

    int Elementos[X][Y], Qnt = 0;

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Elementos[i][j]);
            if (Elementos[i][j] > 15 && Elementos[i][j] < 20)
                Qnt++;
        }
    }
    printf("%d\n", Qnt);

    return 0;
}