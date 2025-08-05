#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int numerador;
    int denominador;
} fracao;

fracao criarfracao(int n, int d)
{
    fracao f;
    f.numerador = n;
    f.denominador = d;
    return f;
}

int main()
{
    fracao f1 = criarfracao(7, 2);
    printf ("%f\n", (float)f1.numerador / f1.denominador);
    return 0;
}

//fracao divindo numerador pelo denominador analisando o resto, caso seja diferente de 0, sera dividido o denominador pelo resto ate dar 0 no resto,