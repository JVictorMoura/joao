#include <stdio.h>

    int main(int argc, char* argv[]){
        float lado1, lado2, area;

        printf("Digite o valor do lado 1 do losango:\n");
        scanf("%f", &lado1);

        printf("Digite o valor do lado 2 do losango:\n");
        scanf("%f", &lado2);

        area = (lado1 * lado2) / 2;

        printf("A area do losango eh: %.2f\n", area);  


   
    return 0;
}
