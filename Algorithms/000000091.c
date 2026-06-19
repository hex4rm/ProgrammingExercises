#include <stdio.h>
#include <string.h>
#define clientes 3

int main(){

    char Cliente[clientes][50];
    int DVDLocados[clientes];

    for(int i = 0; i < clientes; i++){
        scanf("%s",&Cliente[i]);
        scanf("%d",&DVDLocados[i]);
    }

    printf("%-5s %-5s","CLIENTE","LOCACOES GRATIS\n");
    for(int i = 0; i < clientes; i++){
        if(DVDLocados[i] >= 10){
            printf("%-5s %-5d\n",Cliente[i],DVDLocados[i] / 10);
        }
    }

    return 0;
}