int maior_2n(int a, int b) {
    int maior;

    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }

    return maior;
}

//retorna o maior entre tres numeros inteiros
int maior_3n(int a, int b, int c) {
    int maiorr;
    int maior2;

    maiorr = maior_2n(a, b);     //primeiro compara os dois primeiros
    maior2 = maior_2n(maiorAB, c);  //depois compara o maior entre eles com o terceiro

    return maior2;
}

//retorna o menor entre dois numeros inteiros
int menor_2n(int a, int b) {
    int menor;

    if (a < b) {
        menor = a;
    } else {
        menor = b;
    }

    return menor;
}

//retorna o menor entre tres numeros inteiros
int menor_3n(int a, int b, int c) {
    int menorr;
    int menor2;

    menorr = menor_2n(a, b);       //primeiro compara os dois primeiros
    menor2 = menor_2n(menorAB, c);  //depois compara o menor entre eles com o terceiro

    return menor2;
}