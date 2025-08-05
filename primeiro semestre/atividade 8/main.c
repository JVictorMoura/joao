#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definindo uma estrutura para representar um ponto no plano cartesiano
typedef struct {
    int x;
    int y;
} Ponto;

//funcao para calcular a distancia entre dois pontos
double calcularDistancia(Ponto pontoA, Ponto pontoB) {
    int diferencaX = pontoB.x - pontoA.x;
    int diferencaY = pontoB.y - pontoA.y;
    //aplicando a formula
    return sqrt(diferencaX * diferencaX + diferencaY * diferencaY);
}

int main(int argc, char *argv[]) {
    //verifica se o usuario forneceu exatamente 4 argumentos (Xa, Ya, Xb, Yb)
    if (argc != 5) {
        printf("Uso correto: %s Xa Ya Xb Yb\n", argv[0]);
        printf("Exemplo: %s 1 2 4 6\n", argv[0]);
        return 1;
    }

    //crriando os pontos com as coordenadas fornecidas
    Ponto pontoA, pontoB;
    pontoA.x = atoi(argv[1]); //converte string para inteiro
    pontoA.y = atoi(argv[2]);
    pontoB.x = atoi(argv[3]);
    pontoB.y = atoi(argv[4]);

    //calcula a distancia entre os dois pontos
    double distancia = calcularDistancia(pontoA, pontoB);

    //exibe o resultado com duas casas decimais
    printf("A distância entre os pontos A e B é: %.2lf\n", distancia);

    return 0;
}
