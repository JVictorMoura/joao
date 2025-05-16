#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>
// incluindo uma biblioteca propria "passar para o gcc o nome da biblioteca"

int main(int argc, char *argv[])
{
    int a, b, c;
    if (argc != 3 && argc != 4)
    {
        printf("informe 2 ou 3 argumentos.");
        return 1;
    }
    if (argc == 3)
    {
        // argumentos
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("%d", maior_2n(a, b));
    }
    else
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int c = atoi(argv[3]);
        printf("%d", maior_3n(a, b, c));
    }
    return 0; // finaliza uma função
}