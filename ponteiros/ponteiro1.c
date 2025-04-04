#include <stdio.h>

int main(void){
    //x inicia com o valor 10

    int x = 10;
    int *ponteiro; //específicando que a minha váriavel é um ponteiro
    
    // endereço do ponteiro recebee o endereço da váriavel x 

    ponteiro = &x; //endereço do ponteiro arquivando endereço 

    // y recebe o valor 20 

    int y = 20;

    // o valor do ponteiro recebe o valor de y 

    *ponteiro = y; //valor do ponteiro arquivando valor 

    //acessar valor do ponteiro - sem *
    //acessar endereço do ponteiro - com *
    //acessar endereço da váriavel - com &
    //acessar conteúdo da váriavel - sem &

    printf("%d %d\n", x, y);

    
    return 0;
}