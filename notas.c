#include <stdio.h>
int main(int argc, char *argv[])
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
            printf("qual a nota do aluno %d?\n", i + 1);
            scanf("%f", &notas[i]);

            if (notas[i] < 10 || notas[i] > 0)
            {
                soma = soma + notas[i];
            }
            if (notas[i] > 10 || notas[i] < 0)
            {
                printf("Nota invalida, digite novamente a nota do aluno %d\n", i + 1);
            }
        } while (notas[i] > 10 || notas[i] < 0);
    }
    float media = soma / quantidade_alunos;
    float j, c;

    for (int i = 0; i < quantidade_alunos; i++)
    {
        if (notas[i] > 6)
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

    printf("A media das notas dos alunos eh %.2f\n", media);
    printf("a quantidade de alunos aprovados foram: %d\n", aprovados);

    printf("Voce deseja ver a nota de um aluno especifico?\nDigite 1 para SIM\n");
    scanf("%d", &escolha);
    if (escolha == 1)
    {

        printf("Digite o numero do aluno que voce quer ver a nota.\n");
        scanf("%d", &nmr_aluno);

        if (nmr_aluno > quantidade_alunos || nmr_aluno < 1)
        {
            printf("Escolha invalida\n");
        }
        else
        {
            printf("A nota do aluno %d eh %.2f\n", nmr_aluno, notas[nmr_aluno - 1]);
        }
    }
}
