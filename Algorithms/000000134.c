#include <stdio.h>

double Somatorio(int N)
{
    double Soma = 0;
    
    if (N >= 1)
    {
        for (int i = 1; i <= N; i++)
        {
            Soma = Soma + (1.0/i);
        }
    }

    return Soma;
}

int main()
{

    int N;
    double Soma;

    scanf("%d", &N);
    Soma = Somatorio(N);
    printf("Somatorio ate %d e: %.2lf", N, Soma);

    return 0;
}