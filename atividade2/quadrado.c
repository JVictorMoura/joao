#include <stdio.h>

    int main(int argc, char* argv[]){
        float lado, area;

        printf("Digite o valor do lado do quadrado:\n");
        scanf("%f", &lado);

        area = lado * lado;

        printf("A area do quadrado eh: %.2f\n", area);

   
    return 0;
}
