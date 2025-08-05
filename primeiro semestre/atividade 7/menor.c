#include <stdio.h>
#include <stdlib.h>
#include <biblioteca.h>

//declaracoes das funcoes implementadas em biblioteca.c
int menor_2n(int a, int b);
int menor_3n(int a, int b, int c);

int main(int argc, char *argv[]) {
    //verifica se foram passados 2 ou 3 numeros como argumentos
    if (argc != 3 && argc != 4) {
        printf("Uso: %s num1 num2 [num3]\n", argv[0]);
        return 1;
    }

    //converte os argumentos da linha de comando para inteiros
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    //caso com 2 numeros
    if (argc == 3) {
        int resultado = menor_2n(num1, num2);
        printf("Menor número: %d\n", resultado);
    }
    //caso com 3 numeros
    else if (argc == 4) {
        int num3 = atoi(argv[3]);
        int resultado = menor_3n(num1, num2, num3);
        printf("Menor número: %d\n", resultado);
    }

    return 0;
}