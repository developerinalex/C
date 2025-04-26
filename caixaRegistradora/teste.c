#include <stdio.h>
#include <stdlib.h>

int arquivoTxt(void);

struct tipo{
    char nome[15];
    int idade;
    int id;
};

int main(void){
    //só testando a chamada de arquivo txt

    struct tipo t;

    FILE *arquivo = fopen("number.txt", "r");

    fgets(t.nome, 15, arquivo);

    fscanf(arquivo, "%14s, %i, %i", t.nome, &t.idade, &t.id);
    printf("%s, %i, %i\n", t.nome, t.idade, t.id);

    fclose(arquivo);

    getchar();
    return 0;

}

int arquivoTxt(void){
    
}