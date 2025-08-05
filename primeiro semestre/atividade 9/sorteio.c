#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Falha, digite 3 argumentos.\n");
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    
    if (min >= max) {
        printf("o valor minimo deve ser menor que o valor maximo.\n");
        return 1;
    }
    if (esperado < min || esperado > max) {
        printf("o valor esperado deve estar entre o minimo e o maximo.\n");
        return 1;
    }

   
    srand(time(NULL));//randomizando o numero sorteado
    int sorteado = rand() % (max - min + 1) + min;

    
    int acertou = (sorteado == esperado);

    
    printf("Numero sorteado: %d\n", sorteado);
    if (acertou) {
        printf("Voce foi sorteado.\n");
    } else {
        printf("Voce nao foi sorteado.\n");
    }

    
    FILE *arquivo = fopen("log.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo log.txt\n");
        return 1;
    }

    fprintf(arquivo, "minimo: %d, maximo: %d, esperado: %d, sorteado: %d, resultado: %s\n",
            min, max, esperado, sorteado, acertou ? "SUCESSO" : "FALHA");

    fclose(arquivo);
    return 0;
}