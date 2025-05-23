#include <stdio.h>

int main(int argc, char* argv[])
{
    int numero;
    int primo = 1; // 1 = primo, 0 = nao primo

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1)//descartando numeros negativos e menores ou iguais a um
    {
        primo = 0;
    }
    else
    {
        for (int i = 2; i * i <= numero; i++)
        {
            if (numero % i == 0)//testando o resto
            {
                primo = 0;
            }
        }
    }

    if (primo == 1)//se as condições anteriores nao alterarem o valor de "primo", ele permanecerá "1"
    {
        printf("%d eh um numero primo.\n", numero);
    }
    else
    {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}