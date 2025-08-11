#include <stdio.h>

int main(int argc, char *argv)
{
    int quantidade_alunos, escolha, nmr_aluno;
    int aprovados = 0;

    printf("Quantos alunos ha na turma?\n");
    scanf("%d", &quantidade_alunos);

    float notas[quantidade_alunos];
    float soma = 0;

    for (int i = 0; i < quantidade_alunos; i++)
    {
        do
        {
            printf("Qual a nota do aluno %d? ", i + 1);
            scanf("%f", &notas[i]);

            if (notas[i] < 0 || notas[i] > 10)
            {
                printf("Nota invalida. Digite novamente.\n");
            }
        } while (notas[i] < 0 || notas[i] > 10);

        soma += notas[i];
    }

    float media = soma / quantidade_alunos;

    for (int i = 0; i < quantidade_alunos; i++)
    {
        if (notas[i] >= 6.0)
        {
            aprovados++;
        }
    }

    float maior = notas[0];
    float menor = notas[0];

    for (int i = 1; i < quantidade_alunos; i++)
    {
        if (notas[i] > maior)
        {
            maior = notas[i];
        }
        if (notas[i] < menor)
        {
            menor = notas[i];
        }
    }

    printf("\nMaior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Media da turma: %.2f\n", media);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    printf("\nVoce deseja ver a nota de um aluno especifico?\nDigite 1 para SIM: ");
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        printf("Digite o numero do aluno (1 a %d): ", quantidade_alunos);
        scanf("%d", &nmr_aluno);

        if (nmr_aluno < 1 || nmr_aluno > quantidade_alunos)
        {
            printf("Escolha invalida.\n"); 
        }
        else
        {
            printf("A nota do aluno %d eh %.2f\n", nmr_aluno, notas[nmr_aluno - 1]);
        }
    }

    return 0;
}