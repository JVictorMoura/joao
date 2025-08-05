#include <stdio.h>

int main(int argc, char* argv[]) {
    int tipo, tipo2, tipo3;

    printf("Escolha o tipo do seu filme.\nSelecione 1 para filme LEVE e 2 para filme INTENSO.\n");
    scanf("%d", &tipo);

    switch (tipo) {
        case 1: // Filme LEVE
            printf("Sua escolha foi LEVE.\nSelecione um genero para o seu filme:\n1 para filme de COMEDIA e 2 para filme de ANIMACAO.\n");
            scanf("%d", &tipo2);

            if (tipo2 == 1) {
                printf("Sua escolha foi COMEDIA.\nRECOMENDACAO: As Branquelas.\n");
            } else if (tipo2 == 2) {
                printf("Sua escolha foi ANIMACAO.\nRECOMENDACAO: Toy Story.\n");
            } else {
                printf("Escolha invalida.\n");
            }
            break;

        case 2: // Filme INTENSO
            printf("Sua escolha foi INTENSO.\nSelecione um genero para o seu filme:\n1 para filme de TERROR e 2 para filme de ACAO.\n");
            scanf("%d", &tipo2);

            if (tipo2 == 1) { // Gênero TERROR
                printf("Sua escolha foi TERROR.\nSelecione um subgenero para o seu filme:\n1 para TERROR PSICOLOGICO e 2 para TERROR SOBRENATURAL.\n");
                scanf("%d", &tipo3);

                if (tipo3 == 1) {
                    printf("Sua escolha foi TERROR PSICOLOGICO.\nRECOMENDACAO: Corra!.\n");
                } else if (tipo3 == 2) {
                    printf("Sua escolha foi TERROR SOBRENATURAL.\nRECOMENDACAO: Invocação do Mal.\n");
                } else {
                    printf("Escolha invalida.\n");
                }
            } else if (tipo2 == 2) { // Gênero ACAO
                printf("Sua escolha foi ACAO.\nSelecione um subgenero para o seu filme:\n1 para SUPER-HEROIS e 2 para AVENTURA REALISTA.\n");
                scanf("%d", &tipo3);

                if (tipo3 == 1) {
                    printf("Sua escolha foi SUPER-HEROIS.\nRECOMENDACAO: Vingadores Ultimato.\n");
                } else if (tipo3 == 2) {
                    printf("Sua escolha foi AVENTURA REALISTA.\nRECOMENDACAO: Mad Max: Estrada da Fúria.\n");
                } else {
                    printf("Escolha invalida.\n");
                }
            } else {
                printf("Escolha invalida.\n");
            }
            break;

        default:
            printf("Escolha invalida.\n");
            break;
    }

    return 0;
}
// Compare this snippet from assistente_filme.c:#include <stdio.h>

int main(int argc, char* argv[]) {
    int tipo, tipo2, tipo3;

    printf("Escolha o tipo do seu filme.\nSelecione 1 para filme LEVE e 2 para filme INTENSO.\n");
    scanf("%d", &tipo);

    switch (tipo) {
        case 1: // Filme LEVE
            printf("Sua escolha foi LEVE.\nSelecione um genero para o seu filme:\n1 para filme de COMEDIA e 2 para filme de ANIMACAO.\n");
            scanf("%d", &tipo2);

            if (tipo2 == 1) {
                printf("Sua escolha foi COMEDIA.\nRECOMENDACAO: As Branquelas.\n");
            } else if (tipo2 == 2) {
                printf("Sua escolha foi ANIMACAO.\nRECOMENDACAO: Toy Story.\n");
            } else {
                printf("Escolha invalida.\n");
            }
            break;

        case 2: // Filme INTENSO
            printf("Sua escolha foi INTENSO.\nSelecione um genero para o seu filme:\n1 para filme de TERROR e 2 para filme de ACAO.\n");
            scanf("%d", &tipo2);

            if (tipo2 == 1) { // Gênero TERROR
                printf("Sua escolha foi TERROR.\nSelecione um subgenero para o seu filme:\n1 para TERROR PSICOLOGICO e 2 para TERROR SOBRENATURAL.\n");
                scanf("%d", &tipo3);

                if (tipo3 == 1) {
                    printf("Sua escolha foi TERROR PSICOLOGICO.\nRECOMENDACAO: Corra!.\n");
                } else if (tipo3 == 2) {
                    printf("Sua escolha foi TERROR SOBRENATURAL.\nRECOMENDACAO: Invocação do Mal.\n");
                } else {
                    printf("Escolha invalida.\n");
                }
            } else if (tipo2 == 2) { // Gênero ACAO
                printf("Sua escolha foi ACAO.\nSelecione um subgenero para o seu filme:\n1 para SUPER-HEROIS e 2 para AVENTURA REALISTA.\n");
                scanf("%d", &tipo3);

                if (tipo3 == 1) {
                    printf("Sua escolha foi SUPER-HEROIS.\nRECOMENDACAO: Vingadores Ultimato.\n");
                } else if (tipo3 == 2) {
                    printf("Sua escolha foi AVENTURA REALISTA.\nRECOMENDACAO: Mad Max: Estrada da Fúria.\n");
                } else {
                    printf("Escolha invalida.\n");
                }
            } else {
                printf("Escolha invalida.\n");
            }
            break;

        default:
            printf("Escolha invalida.\n");
            break;
    }

    return 0;
}





