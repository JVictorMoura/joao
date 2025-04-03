#include <stdio.h>
#include <math.h>


    int main(int argc, char* argv[]){

    float altura;
    float peso;
   

    printf ("Digite uma altura.\n");
    scanf ("%f", &altura);

    printf ("Digite um peso.\n");   
    scanf ("%f", &peso);

    float imc = peso / (pow (altura, 2));

   if (imc <= 18.5){
    printf ("peso abaixo do normal.\n");
   }
   else if(imc >= 18.5 && imc <= 24.9){
    printf("peso normal.\n");
   }
   else if (imc >= 25 && imc <= 29.9){ 
    printf ("excesso de peso.\n");
    }
    else if (imc >= 30 && imc <= 34.9){ 
    printf ("obesidade classe I.\n");
    }
    else if (imc >= 35 && imc <= 39.9){ 
    printf ("obesidade classe II.\n");
    }
    else if (imc >= 40){ 
    printf ("obesidade classe III.\n");
    }


   
    return 0;
}