int maior_2n(int a, int b)//funcao
{ // retorna o maior entre dois nmrs inteiros entre parentese sao os numeros que a função vai receber

    int maior;
    if (a > b)
    {
        maior = a;
    }
    else
    {
        maior = b;
    }
    return maior;//retorno do codigo
}
//criando outras funcoes, retorna o maior entre 3
int maior_3n(int a, int b, int c){
        return maior_2n(maior_2n(a, b), c);
}
//adicionar codigo de primo