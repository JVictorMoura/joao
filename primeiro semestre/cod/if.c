#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


   
    int main(int argc, char* argv[]){
        int s = 5;  
        for (int i = s; i >= 1; i--){
            if (i != 3) {
            system ("cls");
                printf ("você nçao eh o 3!\n");
                Sleep (3000);
            
            }else {
                system ("cls");
                printf ("você é o 3\n");
                Sleep (3000);
                }
           
            

        }

    return 0;
}