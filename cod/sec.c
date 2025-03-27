#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


   
    int main(int argc, char* argv[]){
        int s = 60; 
        for (int i = s; i >= 0; i--){
            system ("cls");
            printf ("%d\n", i);
        Sleep (1000);

        }

    return 0;
}