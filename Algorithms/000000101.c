#include <stdio.h>
#define num 5

int main()
{

    int Vet[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &Vet[num]);
    }

    int MaiorDoVetor = Vet[0];

    for (int j = 0; j < num; j++)
    {
        if (Vet[j] >= MaiorDoVetor)
            MaiorDoVetor = Vet[j];
    }

    for (int k = 0; k < num; k++)
    {
        printf("%d", Vet[k] / MaiorDoVetor);
    }
}