#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    for (int n = 0; n >= 0 && n <= 100; n += 10) //"+="" para selecionar a quantidade a ser adicionada
    {
        system("cls");
        printf("\n%d", n);
        Sleep(700);
    }

    return 0;
}
