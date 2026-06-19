#include <stdio.h>
#define numeros 5

int main(){

    int vet1[numeros], vet2[numeros], ordenado[numeros];

    for(int i = 0; i < numeros; i++){
        scanf("%d",&vet1[i]);
    }

    for(int i = 0; i < numeros; i++){
        scanf("%d",&vet2[i]);
    }

    for(int i = 0; i < numeros; i++){
        for(int j = 0; j < numeros; j++){
            if(vet1[i] < vet2[j]){
                
            }
        }
    }

    return 0;
}