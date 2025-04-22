#include <stdio.h>

int arquivoTxt(void);

int main(void){
    //só testando a chamada de arquivo txt

    arquivoTxt();

    getchar();
    return 0;

}

int arquivoTxt(void){
    FILE *arquivo = fopen("exemplo.txt", "r");

    printf("%p", arquivo);
}