#include <stdio.h>

int VerificaDivisor(int Dividendo, int Divisor){
    int Verifica;

    if(Dividendo % Divisor == 0)
        return 0;
    else{
        while(Dividendo % Divisor != 0){
            Divisor++;
        }
        return Divisor;
    }
}

int main(){

    int Dividendo, Divisor, Resulta;

    scanf("%d",&Dividendo);
    scanf("%d",&Divisor);
    Resulta = VerificaDivisor(Dividendo, Divisor);
    printf("%d",Resulta);

    return 0;
}