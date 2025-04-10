#include <stdio.h>
int main(int argc, char *argv[])
{
    int tipo, tipo2, tipo3;
    printf("Escolha o tipo do seu filme.\nSelecione 1 para filme LEVE e 2 para filme INTENSO.\n");
    scanf("%d", &tipo);

    switch (tipo)
    {

    case 1:
        printf("\nSua escolha foi LEVE.\nSelecione um genero para o seu filme:\n \"1\" para filme de COMEDIA e 2 para filme de ANIMACAO.\n");
        scanf("%d", &tipo2);

        if (tipo2 == 1)
        {
            printf("\nSua escolha foi COMEDIA.\nRECOMENDACAO\nAs branquelas.\n");
        }
        else if (tipo2 == 2)
        {
            printf("\nSua escolha foi ANIMACAO.\nRECOMENDACAO\nToyStory.\n");
        }
        else
        {
            printf("\nEscolha invalida.\n");
        }
        break;

    case 2:
        printf("\nSua escolha foi INTENSO.\nSelecione um genero para o seu filme:\n 1 para filme de TERROR e 2 para filme de ACAO.\n");
        scanf("%d", &tipo2);

        if (tipo2 == 1)
        { //tudo dentro da chave se refere a caso "tipo2" for igual a 1.
            printf("\nSua escolha foi TERROR.\nSelecione um genero para o seu filme.\n1 para filma TERROR PSICOLOGICO e 2 para TERROR SOBRENATURAL.\n");
            scanf("%d", &tipo3);
            if (tipo3 == 1)
            {
                printf("\nSua escolha foi TERROR PSICOLOGICO.\nRECOMENDACAO\nCorra!.\n");
            }
            else if (tipo3 == 2)
            {
                printf("\nSua escolha foi TERROR SOBRENATURAL.\nRECOMENDACAO\nInvocacao do Mal.\n");
            }
            else
            {
                printf("\nescolha invalida.\n");
            }
        }//finalização do bloco caso "tipo2" for igual a 1.
        else if (tipo2 == 2)
        {//tudo dentro da chave se refere a caso "tipo2" for igual a 2.
            printf("\nSua escolha foi ACAO.\nSelecione um genero para o seu filme.\n1 para filma SUPER-HEROIS e 2 para AVENTURA REALISTA.\n");
            scanf("%d", &tipo3);
            if (tipo3 == 1)
            {
                printf("\nSua escolha foi SUPER-HEROIS.\nRECOMENDACAO\nVingadores Ultimato.\n");
            }
            else if (tipo3 == 2)
            {
                printf("\nSua escolha foi AVENTURA REALISTA.\nRECOMENDACAO\nMad Max: Estrada Furia.\n");
            }
            else
            {
                printf("\nescolha invalida\n");
            }
        }//finalização do bloco caso "tipo2" for igual a 2.
        else
        {
            printf("\nescolha invalida.\n");
        }
        break;
    default:
        printf("\nescolha invalida.\n");
        break;
    }

    return 0;
}