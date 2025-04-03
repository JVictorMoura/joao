#include <stdio.h>
#include <math.h>

    int main(int argc, char* argv[]){
        char escolha;
        float circulo, losangulo, quadrado, retangulo, triangulo, trapezio;
        float raio, lado1, lado2, lado, base, altura, base1, base2;

        printf ("area.c\nEscolha uma opcao:\n");
        printf ("c - Circulo\n");
        printf ("l - losangulo\n");
        printf ("q - quadrado\n");
        printf ("r - retangulo");
        printf ("t - triangulo\n");
        printf ("z - trapezio\n");
        scanf ("%c", &escolha);



        switch (escolha)
        {
        case 'c':
           printf("Digite o valor do raio do circulo:\n"); 
       scanf("%f", &raio);

        area = 3.14 * (powf (raio, 2));
       
       printf("A area do circulo eh: %.2f\n", area);
           
            break;
            case 'l':
            printf("Digite o valor do lado 1 do losango:\n");
        scanf("%.2f", &lado1);

        printf("Digite o valor do lado 2 do losango:\n");
        scanf("%.2f", &lado2);

        area = (lado1 * lado2) / 2;

        printf("A area do losango eh: %.2f\n", area);  
            break;

            case 'q':
            printf("Digite o valor do lado do quadrado:\n");
        scanf("%f", &lado);

        area = lado * lado;

        printf("A area do quadrado eh: %.2f\n", area);
            break;

            case 'r':
             printf("Digite o valor da base do retangulo:\n");
        scanf("%f", &base);

        printf("Digite o valor da altura do retangulo:\n");
        scanf("%f", &altura);

        area = base * altura;

        printf("A area do retangulo eh: %.2f\n", area);
            break;

            case 't':
            printf("Digite o valor da base do triangulo:\n");
         scanf("%f", &base);

        printf("Digite o valor da altura do triangulo:\n");
        scanf("%f", &altura);

        area = (base * altura) / 2;
        
        printf("A area do triangulo eh: %.2f\n", area);

            break;

            case 'z':
            printf("Digite o valor da base maior do trapezio:\n");
        scanf("%f", &base1);

        printf("Digite o valor da base menor do trapezio:\n");
        scanf("%f", &base2);

        printf("Digite o valor da altura do trapezio:\n");
        scanf("%f", &altura);

        float area = ((base1 + base2) * altura) / 2;
        
        printf("A area do trapezio eh: %.2f\n", area);
            break;
    
        default:
        printf ("opcao invalida.\n");
            break;
        }
    printf ("a area eh: %.2f", area);
    
    return 0;
}
