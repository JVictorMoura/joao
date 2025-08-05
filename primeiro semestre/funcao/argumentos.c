#include <stdio.h>
#include <string.h> //strcmp
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char *argv[])
{

    if (argc < 3)
    {
        printf("Argumento invalido!\n");
        return 1; // finalizar o programa com erro
    }
    if (strcmp(argv[1], "-maior") == 0)
    { // primeiro argumento (0) é o nome do programa strcmp = comparar strings
        if (argc != 4)
        {
            printf("Argumento invalido!\n");
            return 1; // finalizar o programa com erro
        }
        int a = atoi(argv[3]);
        int b = atoi(argv[4]);
        printf("%d", maior_2n(a, b));
    }
    if (strcmp (argv[1], "-primo") == 0){
         if (argc != 3)
        {
            printf("Argumento invalido!\n");
            return 1; // finalizar o programa com erro
        }
    }
    return 0;
}
