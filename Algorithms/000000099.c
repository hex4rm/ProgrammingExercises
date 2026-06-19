#include <stdio.h>
#define num 5

int main()
{

    int vetA[num], vetB[num], vetR[num], pos = 0, i = 0, j = num - 1;

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &vetA[i]);
    }
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &vetB[i]);
    }

    while (pos < num)
    {
        vetR[pos] = vetA[i] - vetB[j];
        i++; // 0, 1, 2, 3, 4
        j--; // 4, 3, 2, 1, 0
        pos++;
    }

    printf("Vetor Resultante:\n");
    for (int i = 0; i < num; i++)
        printf("%d ", vetR[i]);

    return 0;
}