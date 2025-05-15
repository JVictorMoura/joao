#include <stdio.h>

int main(int argc, char* argv[])
{

int opcao;
do {
printf ("Escolha uma opcao:\n1 - Iniciar o quiz\n2 - Sair");
scanf("%d", &opcao);
}while(opcao != 1 && opcao != 0);

    return 0;
}