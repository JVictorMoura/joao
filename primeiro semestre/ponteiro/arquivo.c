#include <stdio.h>

    int main(int argc, char* argv[]){
        /*Modos de aberturas de arquivo
        r para leitura de dados
        w para criar e escrever no arquivo SOBRESCREVER - CRIAR ARQUIVO NOVO 
        a para criar se nao existir e adicionar ao final do arquivo, adição de informaçao no mesmo arquivo
        */
       char texto[max_txt];

        FILE *borabill = fopen("borabill.txt", "r");//arquivo, sempre é ponteiro, ponteiro guarda o endereço da memoria (f de file)

        if (borabill == NULL){
            printf ("erro\n");
            return 1;
        }
        fprintf (stdout, "Hello word!\n");
        fclose (borabill);

   
    return 0;
}
