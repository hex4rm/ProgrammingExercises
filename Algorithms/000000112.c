#include <stdio.h>
#define X 8
#define Y 5

int main(){

    int Aluno[X], 
    Disciplina[Y], 
    ProvasFeitas[X][Y], 
    QuantidadeAlunos = 0, 
    CodigoDisciplina,
    PosDisciplina,
    DisciplinaExiste = 0, 
    QuantZero = 0, 
    IdadesSomadas = 0;

    float Media;

    for(int i = 0; i < X; i++){
        scanf("%d",&Aluno[i]);
    }
    for(int i = 0; i < Y; i++){
        scanf("%d",&Disciplina[i]);
    }

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d",&ProvasFeitas[i][j]);
        }
    }
    
    printf("===============================================\n");
    
    printf("Digite o codigo de uma disciplina: ");
    scanf("%d",&CodigoDisciplina);

    for(int i = 0; i < Y; i++){
        if(CodigoDisciplina == Disciplina[i]){
            DisciplinaExiste = 1;
            PosDisciplina = i;
            break;
        }
    }

    if(DisciplinaExiste == 1){
        for(int i = 0; i < X; i++){
            if((Aluno[i] >= 18 && Aluno[i] <= 25) && ProvasFeitas[i][PosDisciplina] > 2){
                QuantidadeAlunos++;
                break;
            }
        }
    }

    else{
        printf("Disciplina nao existe.\n");
    }

    for(int i = 0; i < X; i++){
            if(ProvasFeitas[i][PosDisciplina] <  3){
                printf("%d %d %d\n",Aluno[i],Disciplina[PosDisciplina],ProvasFeitas[i][PosDisciplina]);
            }
    }

    printf("===============================================\n");

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            if(ProvasFeitas[i][j] == 0){
                IdadesSomadas += Aluno[i];
                QuantZero++;
                break;
            }
        }
    }

    Media = (float) IdadesSomadas / (float) QuantZero;

    printf("Media das idades dos alunos que nao fizeram pelo menos uma prova em uma das disciplinas listas: %.1f\n",Media);

    return 0;
}