#include <stdio.h>

    int main(int argc, char* argv[]){
        int tipo, tipo2;
        printf ("Escolha o tipo do seu filme.\nSelecione 1 para filme leve e 2 para filme intenso.\n");
        scanf ("%d", &tipo);

        switch (tipo){

        case 1:
        
            printf ("Sua escolha foi LEVE.\nSelecione um genero para o seu filme:\n \"1\" para filme de COMEDIA e 2 para filme de ANIMACAO.\n");
            scanf ("%d", &tipo);
            if (tipo == 1){
                printf("Sua escolha foi COMEDIA.\nRECOMENDACAO\nAs branquelas.\n");
            }
            else if (tipo == 2){
                printf ("Sua escolha foi ANIMACAO.\nRECOMENDACAO\nToyStory.\n");
            } else {
                printf ("escolha invalida.\n");
            }
               break;
            
            
            case 2: 

            printf ("Sua escolha foi INTENSO.\nSelecione um genero para o seu filme:\n 1 para filme de TERROR e 2 para filme de ACAO.\n");
            scanf ("%d", &tipo2);

            if (tipo2 == 1){
                printf("Sua escolha foi TERROR.\nSelecione um genero para o seu filme.\n1 para filma TERROR PSICOLOGICO e 2 para TERROR SOBRENATURAL.\n");
            scanf ("%d", &tipo2);}

            else if (tipo2 == 1){
                printf("Sua escolha foi TERROR PSICOLOGICO.\nRECOMENDACAO\nCorra!.\n");
            }

            else if (tipo2 == 2){
                printf ("Sua escolha foi TERROR SOBRENATURAL.\nRECOMENDACAO\nInvocacao do Mal.\n");

            } else{
                printf ("escolha invalida.\n");
            
            }
            if (tipo == 2){
                printf("Sua escolha foi ACAO.\nSelecione um genero para o seu filme.\n1 para filma SUPER-HEROIS e 2 para AVENTURA REALISTA.\n");
            scanf ("%d", &tipo2);}
            
           else if (tipo2 == 1){
                printf("Sua escolha foi SUPER-HEROIS.\nRECOMENDACAO\nVingadores Ultimato.\n");
            }
           
            else {
                printf ("escolha invalida.\n");
            }
            
            break;
            default: 
                printf ("Escolha invalida.\n");
            
            break;}
        
       
   
    return 0;
    }
        
