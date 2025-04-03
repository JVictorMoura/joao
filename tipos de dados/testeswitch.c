#include <stdio.h>

    int main(int argc, char* argv[]){
        int i;
        float a, b;
        

        printf ("selecione uma opcao\n1 = subrtracao.\n2 = adicao.\n");
        scanf ("%d", &i);
        printf("selecione numeros\n");
        scanf ("%f %f", &a, &b);
        int adicao = a + b;
        int subtracao = a - b;

        
        
        switch (i)
        {
        case 1:
        printf ("a subtracao eh: %d\n", subtracao);
            
            break;

        case 2:
        printf ("a adicao eh: %d\n", adicao);
        break;

        
        default:
            printf ("erro.\n");
        break;

        }
        

        return 0;
}
