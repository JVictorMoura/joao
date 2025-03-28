#include <stdio.h>
#include <math.h>

    int main(int argc, char* argv[]){
        float raio;

       printf("Digite o valor do raio do circulo:\n"); 
       scanf("%f", &raio);

       float area = 3.14 * (powf (raio, 2));
       
       printf("A area do circulo eh: %.2f\n", area);

   
    return 0;
}
