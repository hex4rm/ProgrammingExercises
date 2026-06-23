#include <stdio.h>
#include <math.h>

float Potenciador(int base, int expoente)
{

    float produto = 1;
    if (expoente > 0)
    {
        for (int i = 1; i <= expoente; i++)
        {
            produto *= base;
        }
    }
    else if (expoente < 0)
    {
        for (int i = 1; i <= abs(expoente); i++)
        {
            produto *= (base / i);
        }
    }

    return produto;
}

int main()
{

    int base, expoente;
    float resultado;

    scanf("%d", &base);
    scanf("%d", &expoente);
    resultado = Potenciador(base, expoente);
    printf("%.1f\n", resultado);

    return 0;
}