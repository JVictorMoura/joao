#include <stdio.h>
#include <stdlib.h>
typedef struct ponto
{
    int x;
    float y;
} ponto;

int main(int argc, char *argv[])
{
    int qtd_linhas = 0;
    int x;
    float y;
    ponto *numeros;

    FILE *arq = fopen("dados_regressao.csv", "r"); // r read, modo leitura fopen "*nome do arquivo" para abri-lo

    if (arq == NULL)
    {
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while (fscanf(arq, "%d, %f", &x, &y) != EOF) // end of file
    {
        qtd_linhas++; // verificando a quantidade de numeros
        // printf("%2.f\n", n);
    }

    numeros = malloc(sizeof(ponto) * qtd_linhas); // memory alloc, reserva de memoria | size of "tamanho de"

    printf("qtn_linhas = %d\n", qtd_linhas);
    if (numeros != NULL)
    {
        int i = 0;
        fseek(arq, 0, SEEK_SET); // colocando o cursor no inicio do arquivo para releitura
        while (fscanf(arq, "%d, %f", &x, &y) != EOF)
        {
            numeros[i].x = x;
            numeros[i].y = y;
            i++;
        }
    }
    for (int i = 0; i < qtd_linhas; i++)
    {
        printf("%d, %f\n", numeros[i].x, numeros[i].y);
    }

    fclose(arq);
    return 0;
}