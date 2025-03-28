#include <stdio.h>
#include <math.h>

    int main(int argc, char* argv[]){
        float n1, n2;
       

        printf ("Digite um valor.\n");
        scanf ("%f", &n1);

        printf  ("Digite outro valor.\n");
        scanf ("%f", &n2);

        float soma = n1 + n2;
        float produto = n1 * n2;
        float divisao = n1/ n2;
        float resultado_potenciacao = powf ((n1), n2);
        float raiz_quadrada = sqrtf (n1);
        
        int resto =(int) n1 %(int) n2;//forcando o ponto flutuante "float" funcionar como inteiro (int)
        int quociente_inteiro = n1 / (int) n2; 
            
        

        printf ("%.2f mais %.2f eh: %.2f\n", n1, n2, soma);
        printf ("%.2f vezes %.2f eh: %.2f\n", n1, n2, produto);
        printf ("%.2f dividido %.2f eh: %.2f\n", n1, n2, divisao);
        printf ("%.2f ^ %.2f eh: %.2f\n", n1, n2, resultado_potenciacao);
        printf ("raiz de %.2f eh: %f\n", n1, raiz_quadrada);
        printf ("o resto de %.0f e %.0f eh: %d\n", n1, n2, resto);//%0.f para aparecer somente a parte inteira do nmr
        printf ("%.2f dividido %.2f eh: %d\n", n1, n2, quociente_inteiro);

        
    return 0;
}
