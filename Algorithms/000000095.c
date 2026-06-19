#include <stdio.h>
#define num 10

int main()
{

    int vet1[num], vet2[num], vet3[num];

    printf("Vetor 1:\n");
    for (int i = 0; i < num; i++)
        scanf("%d", &vet1[i]);

    printf("Vetor 2:\n");
    for (int i = 0; i < num; i++)
        scanf("%d", &vet2[i]);

    for (int i = 0; i < num; i++)
        vet3[i] = vet1[i] * vet2[i];

    printf("Vetor Resultante:\n");
    for (int i = 0; i < num; i++)
        printf("%d ", vet3[i]);

    return 0;
}