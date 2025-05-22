#include <stdio.h>
#define TAM_NOME 64
typedef struct aluno
{
    char nome[TAM_NOME]; // typedef define o nome do struct, ao cahmar "aluno", já será considerado como struct
    float nota;
} aluno;

void imprimir_aluno(struct aluno a)
{ // função sem retorno
    printf("Nome: %s                Nota: %f\n", a.nome, a.nota);
}

int main(int argc, char *argv[])
{

    float soma = 0;
    int n = 5;
    aluno alunos[n]; // criando variavel?
    float media;
    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite o nome do aluno %d:\n", i + 1);
            fgets(alunos[i].nome, TAM_NOME, stdin);

            printf("Digite a nota do aluno %d\n", i + 1);
            scanf("%f", &alunos[i].nota);
            fflush(stdin); // limpar buffer
            if (alunos[i].nota < 0 || alunos[i].nota > 10)
            {
                printf("Nota invalida, de os dados do aluno novamente.\n");
            }

            if (alunos[i].nota > 0 && alunos[i].nota < 10)
            {
                soma = soma + alunos[i].nota;
            }
        } while (alunos[i].nota < 0 || alunos[i].nota > 10);
    }
    media = soma / 5;
    for (int i = 0; i < 5; i++)
    {
        imprimir_aluno(alunos[i]);
    }
    printf("%.2f", media);
    float maior = alunos[0].nota;
    float menor = alunos[0].nota;
    for (int i = 1; i < 5; i++)
    {
        if (alunos[i].nota > maior)
        {
            maior = alunos[i].nota;
        }
        if (alunos[i].nota < menor)
        {
            menor = alunos[i].nota;
        }
    }
    printf("A maior nota é: %.2f\n", maior);
    printf("A menor nota é: %.2f\n", menor);
    return 0;
}
