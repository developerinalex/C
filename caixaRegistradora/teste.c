#include <stdio.h>
#include <stdlib.h>

int arquivoTxt(void);

struct tipo{
    char nome[100];
    int idade;
    int sld;
};

int main(void){
    //só testando a chamada de arquivo txt

    struct tipo t;

    FILE *arquivo = fopen("number.txt", "r");

    fgets(t.nome, 100, arquivo);

    fscanf(arquivo, "%i %i", &t.idade, &t.sld);
 
    printf("Nome: %sIdade: %i\nSaldo: %i\n", t.nome, t.idade, t.sld);

    fclose(arquivo);

    getchar();
    return 0;

}

int arquivoTxt(void){
    
}