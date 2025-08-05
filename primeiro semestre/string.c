#include <stdio.h>
#include <string.h>
#define TAM 255

int main(int argc, char *argv[])
{
    // declaraçao de string
    char palavra1[] = "Conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'}; //\0 eh um terminador terminador especial
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n%s\n", palavra1, palavra2);

    printf("digite uma frase\n");
    fflush(stdin);               // limpar buffer
    fgets(palavra3, TAM, stdin); // ler tudo do printf - sintaxe para leitura segura de uma string | substitui o scanf

    printf("digite uma frase\n");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);

    printf("%s", palavra4);

    if (strcmp(palavra3, palavra4) == 0)
    { // comparação de strings
        printf("as palavras sao iguais\n");
    }
    else
    {
        printf("n ta a mema fita\n");
    }

    for (int i = 0; i < strlen(palavra3); i++)
    {
        printf("%c\n", palavra3[i]);
    }
    printf("palavra3 ao contrario:\n");
    for (int i = strlen(palavra3); i >= 0; i--)
    {
        printf("%c\n", palavra3[i]);
    }
    strcat (palavra3, palavra4);
    printf ("concatenação %s", palavra3);

    return 0;
    //concatenar palavras3 e palarva 4
    strcat (palavra3, palavra4);
    printf ("concatenacao %s", palavra3);
}