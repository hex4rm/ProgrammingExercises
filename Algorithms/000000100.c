#include <stdio.h>
#include <math.h>
#define num 10

int main()
{

    int vetA[num], qntP = 0, div = 0, pos = 0;
    int raiz;

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &vetA[i]);
        raiz = sqrt(vetA[i]);
        for (int j = 1; j <= raiz; j++)
        {
            if (vetA[i] % j == 0)
                div++;
        }
        if (div <= 2)
        {
            qntP++;
        }
        div = 0;
    }

    int vetPrim[qntP];

    for (int i = 0; i < num; i++)
    {
        raiz = sqrt(vetA[i]);
        for (int j = 1; j <= raiz; j++)
        {
            if (raiz % j == 0)
                div++;
        }
        if (div <= 2)
        {
            if(pos < qntP){
                vetPrim[pos] = vetA[i];
                pos++;
            }
            else{
                break;
            }
        }
        div = 0;
    }

    for (int i = 0; i < qntP; i++)
        printf("%d ", vetPrim[i]);

    return 0;
}