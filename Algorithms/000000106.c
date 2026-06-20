#include <stdio.h>
#include <string.h>
#define X 12
#define Y 4

int main()
{

    int Vendas[X][Y], TotalVendidoNoMes[X], TotalVendidoNaSemana[Y], TotalVendidoNoAno = 0;
    char Mes[X][50];

    for (int i = 0; i < X; i++)
    {
        TotalVendidoNoMes[i] = 0;
        for (int j = 0; j < Y; j++)
        {
            scanf("%d", &Vendas[i][j]);
            TotalVendidoNoMes[i] += Vendas[i][j];
        }
        TotalVendidoNoAno += TotalVendidoNoMes[i];
    }

    for (int j = 0; j < Y; j++)
    {
        TotalVendidoNaSemana[j] = 0;
        for (int i = 0; i < X; i++)
        {
            TotalVendidoNaSemana[j] += Vendas[i][j];
        }
    }

    for (int i = 0; i < X; i++)
    {
        switch (i)
        {
        case 0:
            strcpy(Mes[i], "Janeiro");
            break;
        case 1:
            strcpy(Mes[i], "Fevereiro");
            break;
        case 2:
            strcpy(Mes[i], "Marco");
            break;
        case 3:
            strcpy(Mes[i], "Abril");
            break;
        case 4:
            strcpy(Mes[i], "Maio");
            break;
        case 5:
            strcpy(Mes[i], "Junho");
            break;
        case 6:
            strcpy(Mes[i], "Julho");
            break;
        case 7:
            strcpy(Mes[i], "Agosto");
            break;
        case 8:
            strcpy(Mes[i], "Setembro");
            break;
        case 9:
            strcpy(Mes[i], "Outubro");
            break;
        case 10:
            strcpy(Mes[i], "Novembro");
            break;
        case 11:
            strcpy(Mes[i], "Dezembro");
            break;
        }
    }

    printf("TOTAL VENDIDO DE CADA MES DO ANO:\n");
    for (int i = 0; i < X; i++)
    {
        printf("%s %d\n", Mes[i], TotalVendidoNoMes[i]);
    }

    printf("TOTAL VENDIDO DE CADA SEMANA DO ANO:\n");
    for (int j = 0; j < Y; j++)
    {
        printf("SEMANA %d: %d\n", j, TotalVendidoNaSemana[j]);
    }
    printf("TOTAL VENDIDO PELA LOJA NO ANO:\n");
    printf("%d", TotalVendidoNoAno);

    return 0;
}