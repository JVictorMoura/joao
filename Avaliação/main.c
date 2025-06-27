#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 100

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s -s|-f arquivo.txt\n", argv[0]);
        return 1;
    }

    char tipo = argv[1][1]; // 's' ou 'f'
    char *nomeEntrada = argv[2];

    FILE *entrada = fopen(nomeEntrada, "r");
    if (!entrada) {
        perror("Erro ao abrir arquivo de entrada");
        return 1;
    }

    // Criar nome do arquivo de saída com "_sorted.txt"
    char nomeSaida[256];
    strcpy(nomeSaida, nomeEntrada);
    char *ponto = strrchr(nomeSaida, '.');
    if (ponto) *ponto = '\0'; // remove a extensão
    strcat(nomeSaida, "_sorted.txt");

    FILE *saida = fopen(nomeSaida, "w");
    if (!saida) {
        perror("Erro ao criar arquivo de saída");
        fclose(entrada);
        return 1;
    }

    if (tipo == 's') {
        // Lendo strings
        char **linhas = NULL;
        int tamanho = 0;

        char buffer[MAX_LINHA];
        while (fgets(buffer, MAX_LINHA, entrada)) {
            buffer[strcspn(buffer, "\n")] = '\0'; // remove \n
            linhas = realloc(linhas, (tamanho + 1) * sizeof(char*));
            linhas[tamanho] = malloc(strlen(buffer) + 1);
            strcpy(linhas[tamanho], buffer);
            tamanho++;
        }

        // Ordenar com bubble sort
        for (int i = 0; i < tamanho - 1; i++) {
            for (int j = 0; j < tamanho - i - 1; j++) {
                if (strcmp(linhas[j], linhas[j+1]) > 0) {
                    char *temp = linhas[j];
                    linhas[j] = linhas[j+1];
                    linhas[j+1] = temp;
                }
            }
        }

        // Escrever no arquivo de saída
        for (int i = 0; i < tamanho; i++) {
            fprintf(saida, "%s\n", linhas[i]);
            free(linhas[i]);
        }
        free(linhas);

    } else if (tipo == 'f') {
        // Lendo floats
        float *numeros = NULL;
        int tamanho = 0;
        float valor;

        while (fscanf(entrada, "%f", &valor) == 1) {
            numeros = realloc(numeros, (tamanho + 1) * sizeof(float));
            numeros[tamanho++] = valor;
        }

        // Ordenar com bubble sort
        for (int i = 0; i < tamanho - 1; i++) {
            for (int j = 0; j < tamanho - i - 1; j++) {
                if (numeros[j] > numeros[j+1]) {
                    float temp = numeros[j];
                    numeros[j] = numeros[j+1];
                    numeros[j+1] = temp;
                }
            }
        }

        // Escrever no arquivo de saída
        for (int i = 0; i < tamanho; i++) {
            fprintf(saida, "%.2f\n", numeros[i]);
        }
        free(numeros);

    } else {
        printf("Opção inválida. Use -s para strings ou -f para números.\n");
        fclose(entrada);
        fclose(saida);
        return 1;
    }

    fclose(entrada);
    fclose(saida);
    printf("Arquivo '%s' criado com sucesso.\n", nomeSaida);
    return 0;//
}
