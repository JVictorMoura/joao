#include <stdio.h>

    int main(int argc, char* argv[]){
        int i;
        float a, b;
        

        printf ("selecione uma opcao\n1 = subrtracao.\n2 = adicao.\n3 = multiplicacao.\n4 = divisao.\n");
    
        scanf ("%d", &i);
        if (i < 4){
            printf ("erro");
        } else{
        printf("selecione numeros\n");
        scanf ("%f %f", &a, &b);
        int adicao = a + b;
        int subtracao = a - b;
        int mult = a * b;
        float div = a / b;

        
        
        switch (i)
        {
        case 1:
        printf ("a subtracao eh: %d\n", subtracao);
            
            break;

        case 2:
        printf ("a adicao eh: %d\n", adicao);
        break;

        case 3:
        printf ("a multiplicacao eh: %d\n", mult);
        break;

        case 4:
        printf ("a divisao eh: %f\n", div);
        break;

        
        default:
            printf ("erro.\n");
        break;
        }
        }
        

        return 0;
}
