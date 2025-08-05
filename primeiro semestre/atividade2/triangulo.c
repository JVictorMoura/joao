#include <stdio.h>

    int main(int argc, char* argv[]){
       float base, altura;

         printf("Digite o valor da base do triangulo:\n");
         scanf("%f", &base);

        printf("Digite o valor da altura do triangulo:\n");
        scanf("%f", &altura);

        float area = (base * altura) / 2;
        
        printf("A area do triangulo eh: %.2f\n", area);

   
    return 0;
}
