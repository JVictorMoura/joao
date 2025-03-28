#include <stdio.h>

    int main(int argc, char* argv[]){
        float base1, base2, altura;

        printf("Digite o valor da base maior do trapezio:\n");
        scanf("%f", &base1);

        printf("Digite o valor da base menor do trapezio:\n");
        scanf("%f", &base2);

        printf("Digite o valor da altura do trapezio:\n");
        scanf("%f", &altura);

        float area = ((base1 + base2) * altura) / 2;
        
        printf("A area do trapezio eh: %.2f\n", area);


   
    return 0;
}
