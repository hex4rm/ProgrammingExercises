#include <stdio.h>
#include <string.h>
#define X 15
#define Y 5

int main(){

    float Notas[X][Y], Media[X], SomaAluno = 0, MediaClasse = 0, SomaGeralClasse = 0;
    char Aluno[X][50], Situacao[X][50];

    for(int i = 0; i < X; i++){
        scanf("%s",&Aluno[i]);
        for(int j = 0; j < Y; j++){
            scanf("%f",&Notas[i][j]);
            SomaAluno += Notas[i][j];
        }

        Media[i] = SomaAluno / Y;

        if(Media[i] > 7.0)
            strcpy(Situacao[i],"Aprovado");
        else if(Media[i] >= 4.0 && Media[i] < 7.0)
            strcpy(Situacao[i],"Exame");
        else
            strcpy(Situacao[i],"Reprovado");
        
        SomaGeralClasse += Media[i];
        SomaAluno = 0;
    }

    for(int i = 0; i < X; i++){
        printf("%s %.1f %s\n",Aluno[i],Media[i],Situacao[i]);
   }

    MediaClasse = SomaGeralClasse / X;

    printf("Media da classe: %.2f\n",MediaClasse);

    return 0;
}
