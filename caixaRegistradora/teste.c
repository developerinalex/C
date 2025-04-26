#include <stdio.h>
#include <stdlib.h>

int arquivoTxt(void);

int main(void){
    //só testando a chamada de arquivo txt

    FILE *arquivo = fopen("number.txt", "r");

    int x;

    fscanf(arquivo, "%i", &x);
    printf("%i\n", x);

    fclose(arquivo);

    getchar();
    return 0;

}

int arquivoTxt(void){
    
}