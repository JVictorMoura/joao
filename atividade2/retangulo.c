#include <stdio.h>

    int main(int argc, char* argv[]){
        float base, altura, area;

        printf("Digite o valor da base do retangulo:\n");
        scanf("%f", &base);

        printf("Digite o valor da altura do retangulo:\n");
        scanf("%f", &altura);

        area = base * altura;

        printf("A area do retangulo eh: %.2f\n", area);

   
    return 0;
}
