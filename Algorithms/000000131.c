#include <stdio.h>
#include <string.h>

float PesoIdeal(float Altura, char Sexo)
{
    float Ideal;
    switch (Sexo)
    {
    case 'H':
        Ideal = 72.7 * Altura - 58;
        break;
    case 'M':
        Ideal = 62.1 * Altura - 44.7;
        break;
    }
    return Ideal;
}

int main()
{

    float Altura, Ideal;
    char Sexo;

    printf("Altura: ");
    scanf("%f", &Altura);
    getchar();
    printf("Sexo [H/M]: ");
    scanf("%c", &Sexo);

    while (Sexo != 'H' && Sexo != 'M')
    {
        printf("Digite um Sexo Válido: [H/M] ");
        scanf("%c", &Sexo);
    }

    Ideal = PesoIdeal(Altura, Sexo);

    printf("Peso ideal: %.3f Kg\n", Ideal);
    return 0;
}