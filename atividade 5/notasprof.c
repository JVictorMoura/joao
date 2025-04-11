#include <stdio.h>
int main(int argc, char* argv[]){

    int qntd_alunos;

        printf ("Me fale quantos alunos há na turma.\n");
        scanf ("%d", &qntd_alunos);

        float notas[qntd_alunos];

        for(int i = 0; i < qntd_alunos; i++){
            printf ("digite o valor da nota do aluno %d:\n3", i + 1);
            scanf ("%f", &notas[i]);
        }

    return 0;
}