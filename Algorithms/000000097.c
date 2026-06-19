#include <stdio.h>
#define num 5

int main()
{

    int vet1[num], vet2[num];

    for (int i = 0; i < num; i++)
        scanf("%d", &vet1[i]);

    for (int i = 0; i < num; i++)
    {
        if (vet1[i] == 0)
            vet2[i] = 1;
        else
            vet2[i] = vet1[i];
    }

    for (int i = 0; i < num; i++)
        printf("%d ", vet2[i]);

    return 0;
}