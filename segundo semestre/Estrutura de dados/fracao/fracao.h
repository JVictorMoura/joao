//funcoes e structs / cabeçalho
#ifndef fracao_h
#define fracao_h



typedef struct
{
    int Num;
    int Den;
} fracao;

fracao criarfracao(int n, int d);
int calcularMDS(int a, int b);
fracao SimplificarFracao(fracao f);
void ExibirFracao(fracao f);
fracao SomaFracao(fracao f, fracao g);
fracao SubtracaoFracao(fracao f, fracao g);

#endif