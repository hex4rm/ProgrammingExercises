#include <stdio.h>
#define num 5

int main()
{

    int vet1[num];

    for (int i = 0; i < num; i++)
        scanf("%d", &vet1[i]);

    for (int i = 0; i < num; i++)
    {
        if (vet1[i] > 0)
            printf("%d ", vet1[i]);
    }


    return 0;
}