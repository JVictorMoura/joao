#include <stdio.h>     //Biblioteca padrao para entrada e saida (printf, fopen, fgets, etc)
#include <stdlib.h>    //Biblioteca para malloc, realloc, free, etc
#include <string.h>    //Biblioteca para manipulacao de strings (strcpy, strcmp, etc)

#define MAX_LINHA 100  //Define o tamanho maximo de uma linha lida do arquivo

int main(int argc, char *argv[]) {
    //Verifica se o numero de argumentos esta correto
    if (argc != 3) {
        printf("Uso: %s -s|-f arquivo.txt\n", argv[0]); //Mostra instrucao de uso
        return 1; //Encerra com erro
    }

    char tipo = argv[1][1]; //Pega o segundo caractere do primeiro argumento, deve ser 's' ou 'f'
    char *nomeEntrada = argv[2]; //Ponteiro para o nome do arquivo de entrada

    //Tenta abrir o arquivo de entrada em modo leitura ("r")
    FILE *entrada = fopen(nomeEntrada, "r");
    if (!entrada) {
        perror("Erro ao abrir arquivo de entrada"); //Imprime o erro se falhar
        return 1;
    }

    //Cria o nome do arquivo de saida com sufixo "_sorted.txt"
    char nomeSaida[256]; //Buffer para armazenar o nome novo
    strcpy(nomeSaida, nomeEntrada); //Copia o nome original para o buffer
    char *ponto = strrchr(nomeSaida, '.'); //Busca o ultimo ponto (para remover extensao)
    if (ponto) *ponto = '\0'; //Remove a extensao se existir
    strcat(nomeSaida, "_sorted.txt"); //Adiciona o sufixo "_sorted.txt"

    //Tenta abrir o arquivo de saida em modo escrita ("w")
    FILE *saida = fopen(nomeSaida, "w");
    if (!saida) {
        perror("Erro ao criar arquivo de saida");
        fclose(entrada); //Fecha o arquivo de entrada
        return 1;
    }

    //Se o tipo for string ('s'), ordena nomes
    if (tipo == 's') {
        char **linhas = NULL; //Ponteiro para vetor de strings
        int tamanho = 0;      //Quantidade de linhas lidas

        char buffer[MAX_LINHA]; //Buffer temporario para armazenar a linha
        while (fgets(buffer, MAX_LINHA, entrada)) { //Le uma linha do arquivo
            buffer[strcspn(buffer, "\n")] = '\0'; //Remove o caractere '\n' do final
            linhas = realloc(linhas, (tamanho + 1) * sizeof(char*)); //Realoca espaco para mais uma string
            linhas[tamanho] = malloc(strlen(buffer) + 1); //Aloca espaco para a nova string
            strcpy(linhas[tamanho], buffer); //Copia a string lida para o vetor
            tamanho++; //Incrementa o contador de linhas
        }

        //Ordena as strings usando Bubble Sort
        for (int i = 0; i < tamanho - 1; i++) {
            for (int j = 0; j < tamanho - i - 1; j++) {
                if (strcmp(linhas[j], linhas[j+1]) > 0) { //Compara duas strings
                    char *temp = linhas[j]; //Troca se estiver fora de ordem alfabetica
                    linhas[j] = linhas[j+1];
                    linhas[j+1] = temp;
                }
            }
        }

        //Escreve as strings ordenadas no arquivo de saida
        for (int i = 0; i < tamanho; i++) {
            fprintf(saida, "%s\n", linhas[i]); //Escreve cada string
            free(linhas[i]); //Libera a memoria de cada string
        }
        free(linhas); //Libera o vetor de ponteiros

    } else if (tipo == 'f') {
        //Se o tipo for numero ('f'), ordena numeros de ponto flutuante
        float *numeros = NULL; //Ponteiro para vetor de floats
        int tamanho = 0;       //Quantidade de numeros lidos
        float valor;

        //Le os numeros do arquivo
        while (fscanf(entrada, "%f", &valor) == 1) {
            numeros = realloc(numeros, (tamanho + 1) * sizeof(float)); //Realoca espaco
            numeros[tamanho++] = valor; //Armazena o valor no vetor e incrementa o tamanho
        }

        //Ordena os numeros com Bubble Sort
        for (int i = 0; i < tamanho - 1; i++) {
            for (int j = 0; j < tamanho - i - 1; j++) {
                if (numeros[j] > numeros[j+1]) { //Se estiver fora de ordem, troca
                    float temp = numeros[j];
                    numeros[j] = numeros[j+1];
                    numeros[j+1] = temp;
                }
            }
        }

        //Escreve os numeros ordenados no arquivo de saida
        for (int i = 0; i < tamanho; i++) {
            fprintf(saida, "%.2f\n", numeros[i]); //Imprime cada numero com 2 casas decimais
        }
        free(numeros); //Libera memoria do vetor

    } else {
        //Se o argumento nao for -s ou -f
        printf("Opcao invalida. Use -s para strings ou -f para numeros.\n");
        fclose(entrada);
        fclose(saida);
        return 1;
    }

    //Fecha os arquivos apos terminar
    fclose(entrada);
    fclose(saida);

    //Mensagem de sucesso
    printf("Arquivo '%s' criado com sucesso.\n", nomeSaida);
    return 0; //Finaliza com sucesso
}