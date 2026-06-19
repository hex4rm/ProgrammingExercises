#include <stdio.h>
#define num 5

int main()
{

    int vetA[num], counter = 0;

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &vetA[i]);
        if (vetA[i] != 0 && vetA[i] > 0)
            counter++;
    }

    int vetB[counter], pos = 0;

    for (int i = 0; i < num; i++)
    {
        if(vetA[i] != 0  && vetA[i] > 0){
            vetB[pos] = vetA[i];
            pos++;
        }
    }

    for(int i = 0; i < counter; i++)
        printf("%d ",vetB[i]);

    return 0;
}