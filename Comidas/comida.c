#include <stdio.h>

int main(int argc, char* argv[])
{
    int escolha1, subregiao, tipo, pais;

    printf("Descobrindo comidas de diferentes paises!!\n");
    do
    {
        printf("Escolha uma regiao:\n");
        printf("1 - Ocidente\n");
        printf("2 - Oriente\n");
        scanf("%d", &escolha1);
        if (escolha1 != 1 && escolha1 != 2)
        {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (escolha1 != 1 && escolha1 != 2);

    switch (escolha1)
    {
    case 1:
        do
        {
            printf("Escolha uma subregiao:\n");
            printf("1 - America do Norte\n");
            printf("2 - America do Sul\n");
            scanf("%d", &subregiao);
            if (subregiao != 1 && subregiao != 2)
            {
                printf("Opcao invalida! Tente novamente.\n");
            }
        } while (subregiao != 1 && subregiao != 2);

        do
        {
            printf("Escolha o tipo de comida:\n");
            printf("1 - Salgada\n");
            printf("2 - Doce\n");
            scanf("%d", &tipo);
            if (tipo != 1 && tipo != 2)
            {
                printf("Opcao invalida! Tente novamente.\n");
            }
        } while (tipo != 1 && tipo != 2);

        if (subregiao == 1)
        {
            do
            {
                printf("Escolha um pais:\n");
                printf("1 - Estados Unidos\n");
                printf("2 - Canada\n");
                scanf("%d", &pais);
                if (pais != 1 && pais != 2)
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (pais != 1 && pais != 2);

            if (tipo == 1)
            {
                if (pais == 1)
                {
                    printf("Algumas comidas salgadas dos EUA:\n");
                    printf("Hamburguer\n");
                    printf(" Hot Dog\n");
                    printf(" Mac and Cheese\n");
                }
                else
                {
                    printf("Algumas comidas salgadas do Canada:\n");
                    printf("Poutine\n");
                    printf("Tourtiere\n");
                    printf("Peameal bacon\n");
                }
            }
            else
            {
                if (pais == 1)
                {
                    printf("Algumas comidas doces dos EUA:\n");
                    printf("Brownie\n");
                    printf("Donuts\n");
                    printf("Cookies\n");
                }
                else
                {
                    printf("Algumas comidas doces do Canada:\n");
                    printf("Butter Tarts\n");
                    printf("Nanaimo Bars\n");
                    printf("Maple Fudge\n");
                }
            }
        }
        else if (subregiao == 2)
        {
            do
            {
                printf("Escolha um pais:\n");
                printf("1 - Brasil\n");
                printf("2 - Argentina\n");
                scanf("%d", &pais);
                if (pais != 1 && pais != 2)
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (pais != 1 && pais != 2);

            if (tipo == 1)
            {
                if (pais == 1)
                {
                    printf("Algumas comidas salgadas do Brasil:\n");
                    printf("Feijoada\n");
                    printf("Coxinha\n");
                    printf("Pao de Queijo\n");
                }
                else
                {
                    printf("Algumas comidas salgadas da Argentina:\n");
                    printf("Asado\n");
                    printf("Empanadas\n");
                    printf("Milanesa\n");
                }
            }
            else
            {
                if (pais == 1)
                {
                    printf("Algumas comidas doces do Brasil:\n");
                    printf("Brigadeiro\n");
                    printf("Pudim\n");
                    printf("Beijinho\n");
                }
                else
                {
                    printf("Algumas comidas doces da Argentina:\n");
                    printf("Alfajor\n");
                    printf("Doce de leite\n");
                    printf("Churros\n");
                }
            }
        }
        break;

    case 2:
        do
        {
            printf("Escolha uma subregiao:\n");
            printf("1 - Asia Oriental\n");
            printf("2 - Asia Meridional\n");
            scanf("%d", &subregiao);
            if (subregiao != 1 && subregiao != 2)
            {
                printf("Opcao invalida! Tente novamente.\n");
            }
        } while (subregiao != 1 && subregiao != 2);

        do
        {
            printf("Escolha o tipo de comida:\n");
            printf("1 - Salgada\n");
            printf("2 - Doce\n");
            scanf("%d", &tipo);
            if (tipo != 1 && tipo != 2)
            {
                printf("Opcao invalida! Tente novamente.\n");
            }
        } while (tipo != 1 && tipo != 2);

        if (subregiao == 1)
        {
            do
            {
                printf("Escolha um pais:\n");
                printf("1 - Japao\n");
                printf("2 - Coreia do Sul\n");
                scanf("%d", &pais);
                if (pais != 1 && pais != 2)
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (pais != 1 && pais != 2);

            if (tipo == 1)
            {
                if (pais == 1)
                {
                    printf("Algumas comidas salgadas do Japao:\n");
                    printf("Sushi\n");
                    printf("Ramen\n");
                    printf("Tempura\n");
                }
                else
                {
                    printf("Algumas comidas salgadas da Coreia do Sul:\n");
                    printf("Bibimbap\n");
                    printf("Bulgogi\n");
                    printf("Samgyeopsal\n");
                }
            }
            else
            {
                if (pais == 1)
                {
                    printf("Algumas comidas doces do Japao:\n");
                    printf("Mochi\n");
                    printf("Dorayaki\n");
                    printf("Dango\n");
                }
                else
                {
                    printf("Algumas comidas doces da Coreia do Sul:\n");
                    printf("Bingsu\n");
                    printf("Yakgwa\n");
                    printf("Hotteok\n");
                }
            }
        }
        else if (subregiao == 2)
        {
            do
            {
                printf("Escolha um pais:\n");
                printf("1 - India\n");
                printf("2 - Bangladesh\n");
                scanf("%d", &pais);
                if (pais != 1 && pais != 2)
                {
                    printf("Opcao invalida! Tente novamente.\n");
                }
            } while (pais != 1 && pais != 2);

            if (tipo == 1)
            {
                if (pais == 1)
                {
                    printf("Algumas comidas salgadas da India:\n");
                    printf("Biryani\n");
                    printf("Samosa\n");
                    printf("Chole Bhature\n");
                }
                else
                {
                    printf("Algumas comidas salgadas de Bangladesh:\n");
                    printf("Bhuna\n");
                    printf("Kacchi Biryani\n");
                    printf("Shorshe Ilish\n");
                }
            }
            else
            {
                if (pais == 1)
                {
                    printf("Algumas comidas doces da India:\n");
                    printf("Gulab Jamun\n");
                    printf("Jalebi\n");
                    printf("Rasgulla\n");
                }
                else
                {
                    printf("Algumas comidas doces de Bangladesh:\n");
                    printf("Mishti Doi\n");
                    printf("Chomchom\n");
                    printf("Sandesh\n");
                }
            }
        }
        break;
    }

    return 0;
}
