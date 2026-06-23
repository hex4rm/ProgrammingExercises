#include <stdio.h>
#include <math.h>
#define Pi 3.1415

float VolumeEsfera(float Raio){
    return (4.0 * Pi * pow(Raio,3)) / 3.0;
}

int main(){

    float Raio, Volume;
    scanf("%f",&Raio);
    Volume = VolumeEsfera(Raio);
    printf("%.2f\n",Volume);

    return 0;
}