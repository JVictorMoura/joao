#include <stdio.h> //chamando a biblioteca de entrada e saída de dados (Standard Input/Output Header)

int main(int argc, char *argv[]) // funçao principal
{
    int escolha1, subregiao, tipo, pais, escolha2; // variaveis do tipo inteiro que serao usadas

    do
    { // laço de repeticao para rodar o codigo novamente caso o usuario queira
        printf("Descobrindo comidas de diferentes paises!!\n");

        do
        { // laço para garantir que o programa va ter continuidade
            printf("Escolha uma regiao:\n");//usando print para dar instruções, opções e mostrar os resultados para o resultado das suas escolhas
            printf("1 - Ocidente\n");//\n para quebrar a linha dentro do prompt de comando quando estiver sendo executado
            printf("2 - Oriente\n");
            scanf("%d", &escolha1);             //%d para inteiro, "&" para armazenar o valor na variavel pretendida, no caso: "escolha1"
            if (escolha1 != 1 && escolha1 != 2) // estrutura condicional, ela avalia se a condiçao dela é verdadeira, se sim, ela executa o que está dentro das chaves, no caso, a opção de erro
            {
                printf("Opcao invalida! Tente novamente.\n");
            } // se a condição for falsa, todo o bloco do "if" será ignorado, e continuará lendo a partir da linha 21.
        } while (escolha1 != 1 && escolha1 != 2); // condiçao para que leia as linhas dentro de "do" || "!=" é um operador de comparação, no caso, ele esta vendo se "escolha1" é DIFERENTE de 1 ou 2.

        switch (escolha1) // estrutura condicional para valores que foi dado para a variavel "escolha1"
        {
        case 1: // quando "escolha1" for = 1, sera executado as seguintes linhas de codigo: limitadas pelo "break"
            do
            { // escolha da sub regiao
                printf("Escolha uma subregiao:\n");
                printf("1 - America do Norte\n");
                printf("2 - America do Sul\n");
                scanf("%d", &subregiao);              // guardando o resultado na varivel
                if (subregiao != 1 && subregiao != 2) // printar caso nao seja uma resposta satisfatoria
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (subregiao != 1 && subregiao != 2); // travar o usuário caso nao seja uma resposta satisfatória

            do
            {
                printf("Escolha o tipo de comida:\n"); // definindo o tipo de comida que o usuário quer
                printf("1 - Salgada\n");
                printf("2 - Doce\n");
                scanf("%d", &tipo);
                if (tipo != 1 && tipo != 2)
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (tipo != 1 && tipo != 2);

            if (subregiao == 1) // condicional para "subregiao" = a 1/América do Norte
            {
                do // estrutura de repetição
                {
                    printf("Escolha um pais:\n"); // escolha do país que se refere a região escolhida
                    printf("1 - Estados Unidos\n");
                    printf("2 - Canada\n");
                    scanf("%d", &pais);         // armazenando valor na variavel
                    if (pais != 1 && pais != 2) // condicional para caso o usuário nao coloque uma resposta insatisfatória
                    {
                        printf("Opcao invalida! Tente novamente.\n");
                    }
                } while (pais != 1 && pais != 2); // condicional para a estrutura de repetição "do"

                if (tipo == 1) // o bloco entre as chaves de "if" sera realizada caso o tipo escolhido seja "1" = salgadas
                {
                    if (pais == 1) // if dentro de if: o bloco entre as chaves de "if" sera realizada caso o tipo escolhido seja "1"
                    {
                        printf("Algumas comidas salgadas dos EUA:\nHamburguer\nHot Dog\nMac and Cheese\n");
                    }
                    else // caso a condição do "if" referente ao país seja falsa, o bloco de comandos entre as chaves desse "else" será executado
                    {
                        printf("Algumas comidas salgadas do Canada:\nPoutine\nTourtiere\nPeameal bacon\n");
                    }
                }
                else               // caso a condição do "if" referente ao tipo seja falsa, o bloco de comandos entre as chaves desse "else" será executado
                {                  //=doces
                    if (pais == 1) // condicional, bloco de comandos entre chaves executado caso "pais == 1" seja verdadeiro
                    {
                        printf("Algumas comidas doces dos EUA:\nBrownie\nDonuts\nCookies\n");
                    }
                    else // caso a condição do "if" q antecede esse "else" seja falsa, o bloco de comandos de "else" será executado
                    {
                        printf("Algumas comidas doces do Canada:\nButter Tarts\nNanaimo Bars\nMaple Fudge\n");
                    }
                }
            }
            else // caso a condição do "if" referente a subregiao seja falsa, o bloco de comandos desse "else" será executado
            {

                do// estrutura de repetição
                {
                    printf("Escolha um pais:\n"); // escolha do país
                    printf("1 - Brasil\n");
                    printf("2 - Argentina\n");
                    scanf("%d", &pais);// armazenando valor na variavel
                    if (pais != 1 && pais != 2)// condicional para caso o usuário nao coloque uma resposta insatisfatória
                    {
                        printf("Opcao invalida! Tente novamente.\n");
                    }
                } while (pais != 1 && pais != 2);// condicional para a estrutura de repetição "do"

                if (tipo == 1)// o bloco entre as chaves de "if" sera realizada caso o tipo escolhido seja "1" = salgadas
                {//salgadas
                    if (pais == 1)// if dentro de if: o bloco entre as chaves de "if" sera realizada caso o tipo escolhido seja "1"
                    {
                        printf("Algumas comidas salgadas do Brasil:\nFeijoada\nCoxinha\nPao de Queijo\n");
                    }
                    else// caso a condição do "if" referente ao país seja falsa, o bloco de comandos entre as chaves desse "else" será executado
                    {
                        printf("Algumas comidas salgadas da Argentina:\nAsado\nEmpanadas\nMilanesa\n");
                    }
                }
                else  // caso a condição do "if" referente ao tipo seja falsa, o bloco de comandos entre as chaves desse "else" será executado
                { //doces
                    if (pais == 1) // condicional, bloco de comandos entre chaves executado caso "pais == 1" seja verdadeiro
                    {
                        printf("Algumas comidas doces do Brasil:\nBrigadeiro\nPudim\nBeijinho\n");
                    }
                    else// caso a condição do "if" q antecede esse "else" seja falsa, o bloco de comandos de "else" será executado
                    {
                        printf("Algumas comidas doces da Argentina:\nAlfajor\nDoce de leite\nChurros\n");
                    }
                }
            }
            break; // final das linhas lidas caso "escolha1" = 1. Caso seja diferente de 1, a compilaçao continuará apartir da linha 126, ignorando tudo dentro de case 1:

        case 2: // quando "escolha1" for = 2, sera executado todo o codigo entre "case 2" e "break". Ou seja, todas essas linhas serao ignoradas caso "escolha1" != 2
                // a partir daqui, haverá repetição dos comandos utilizados nas linhas anteriores
            do
            {
                printf("Escolha uma subregiao:\n"); // definindo a subregiao
                printf("1 - Asia Oriental\n");
                printf("2 - Asia Meridional\n");
                scanf("%d", &subregiao);
                if (subregiao != 1 && subregiao != 2) // condicional para printar mensagem de erro
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (subregiao != 1 && subregiao != 2); // condicional para que o "do" repita seu bloco de comandos

            do//estrutura de repetição
            {
                printf("Escolha o tipo de comida:\n"); // definindo o tipo de comida
                printf("1 - Salgada\n");
                printf("2 - Doce\n");
                scanf("%d", &tipo);
                if (tipo != 1 && tipo != 2) // condicional para printar mensagem de erro
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (tipo != 1 && tipo != 2); // condicional para que o "do" repita seu bloco de comandos

            if (subregiao == 1) // o bloco de comandos desse "if" será executado caso a sua condição seja verdadeira
            {
                do//estrutura de repetição
                {
                    printf("Escolha um pais:\n");
                    printf("1 - Japao\n");
                    printf("2 - Coreia do Sul\n");
                    scanf("%d", &pais);
                    if (pais != 1 && pais != 2) // condicional para printar mensagem de erro
                    {
                        printf("Opcao invalida! Tente novamente.\n");
                    }
                } while (pais != 1 && pais != 2); // condicional para que o "do" repita seu bloco de comandos

                if (tipo == 1) // se a condição de "if" for verdadeira, o seu bloco de comandos será realizado
                {
                    if (pais == 1) //"if" dentro de "if" | caso a condição seja verdadeira, o bloco de comandos desse if será executado
                    {
                        printf("Algumas comidas salgadas do Japao:\nSushi\nRamen\nTempura\n");
                    }
                    else // caso a condição do "if" referente a pais seja falsa, esse "else" terá seu bloco de comandos realizado
                    {
                        printf("Algumas comidas salgadas da Coreia do Sul:\nBibimbap\nBulgogi\nSamgyeopsal\n");
                    }
                }
                else // caso a condição do "if" referente a tipo seja falsa, esse "else" terá seu bloco de comandos executado
                {
                    if (pais == 1) //"if" dentro de "else" | caso a condição seja verdadeira, o bloco de comandos desse if será executado
                    {
                        printf("Algumas comidas doces do Japao:\nMochi\nDorayaki\nDango\n");
                    }
                    else // caso a condição do "if" referente a pais seja falsa, esse "else" terá seu bloco de comandos realizado
                    {
                        printf("Algumas comidas doces da Coreia do Sul:\nBingsu\nYakgwa\nHotteok\n");
                    }
                }
            }
            else // caso a condição do "if" referente a subregião seja falso, o bloco de comandos desse "else" será executado
            {
                do//estrutura de repetição
                {
                    printf("Escolha um pais:\n");
                    printf("1 - India\n");
                    printf("2 - Bangladesh\n");
                    scanf("%d", &pais);
                    if (pais != 1 && pais != 2)// condicional para printar mensagem de erro
                    {
                        printf("Opcao invalida! Tente novamente.\n");
                    }
                } while (pais != 1 && pais != 2);// condicional para que o "do" repita seu bloco de comandos

                if (tipo == 1) // se a condição de "if" for verdadeira, o seu bloco de comandos será realizado
                {
                    if (pais == 1)//"if" dentro de "if" | caso a condição seja verdadeira, o bloco de comandos desse if será executado
                    {
                        printf("Algumas comidas salgadas da India:\nBiryani\nSamosa\nChole Bhature\n");
                    }
                    else// caso a condição do "if" referente a pais seja falsa, esse "else" terá seu bloco de comandos realizado
                    {
                        printf("Algumas comidas salgadas de Bangladesh:\nBhuna\nKacchi Biryani\nShorshe Ilish\n");
                    }
                }
                else// caso a condição do "if" referente a tipo seja falsa, esse "else" terá seu bloco de comandos executado
                {
                    if (pais == 1)//"if" dentro de "else" | caso a condição seja verdadeira, o bloco de comandos desse if será executado
                    {
                        printf("Algumas comidas doces da India:\nGulab Jamun\nJalebi\nRasgulla\n");
                    }
                    else // caso a condição do "if" referente a pais seja falsa, esse "else" terá seu bloco de comandos realizado
                    {
                        printf("Algumas comidas doces de Bangladesh:\nMishti Doi\nChomchom\nSandesh\n");
                    }
                }
            }
            break; // final do codigo que será executado caso "escolha1" = 2.
        }

        printf("Deseja descobrir outra comida?\nSe SIM, digite 1\nSe NAO, digite qualquer outro numero.\n");
        scanf("%d", &escolha2);

    } while (escolha2 == 1); // condicional para que o codigo após "do" rode novamente. Caso o usuario escolha 1, o programa rodará novamente, ja que "escolha2" = 1

    return 0;
}
