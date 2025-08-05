#include <stdio.h>

    int main(int argc, char* argv[]){

        int a;
        printf ("diga quantos alunos tem na turma.\n");
        scanf ("%f", &a);
      
        float notas[a];
        for (int i = 0; i < a; i++){
            do {
                printf ("diga o valor da nota do aluno.\n");
                scanf ("%.2f", &notas[i]);}
                while (notas[i] >= 0 || notas[i] <= 10);
            
        }



   
    return 0;
}
