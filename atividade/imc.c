#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int main(int argc, char* argv[]){

    float altura;
    float peso;
   

    printf ("Digite uma altura.\n");
    scanf ("%f", &altura);

    printf ("Digite um peso.\n");   
    scanf ("%f", &peso);

    float imc = peso / (pow (altura, 2));

    printf ("O IMC eh: %.2f\n", imc);

    system("pause");

   
    return 0;
}
