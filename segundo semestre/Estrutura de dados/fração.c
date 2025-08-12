#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
{
    int Num;
    int Den;
} fracao;

fracao criarfracao(int n, int d)
{
    fracao f; // struct fracao f
    f.Num = n;
    f.Den = d;
    return f;
}
int calcularMDS(int a, int b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (a % b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return (b);
}
fracao SimplificarFracao(fracao f)
{
    int mdc = calcularMDS(f.Num, f.Den); //?
    f.Num = f.Num / mdc;
    f.Den = f.Den / mdc;
    return f;
}
void ExibirFracao(fracao f)
{

    printf("%d / %d", f.Num, f.Den);
}
fracao SomaFracao(fracao f, fracao g)
{
    fracao resposta;
    resposta.Den = f.Den * g.Den;
    resposta.Num = f.Num * g.Den + g.Num * f.Den;
    resposta = SimplificarFracao(resposta);
    return (resposta);
}
fracao SubtracaoFracao(fracao f, fracao g)
{
    fracao resposta;
    resposta.Den = f.Den * g.Den;
    resposta.Num = f.Num * g.Den - g.Num * f.Den;
    resposta = SimplificarFracao(resposta);
    return (resposta);
}
/*

    fracao f;
    int resto;
    int mdc;
    int dividendo_temp;
    do {
    if (f.Num % f.Den != 0){

    }

    }while (resto == 0);
}*/

int main()

{
    /*fracao f1 = criarfracao(30, 40);
    f1 = SimplificarFracao(f1);
    ExibirFracao(f1);
    printf ("%d %d", f1.Num, f1.Den);
    printf("%f\n", (float)f1.Num / f1.Den);


   printf ("%d", calcularMDS(-30, 40))*/

    fracao f5 = criarfracao(2, 4);
    fracao f6 = criarfracao(4, 9);
    fracao f7 = SomaFracao(f5, f6);
    ExibirFracao(f7);
    return 0;
}

// fracao divindo numerador pelo denominador analisando o resto, caso seja diferente de 0, sera dividido o denominador pelo resto ate dar 0 no resto,