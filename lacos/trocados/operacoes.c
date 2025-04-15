#include <stdio.h> 
#include "troco.h"

int main(void){
    printf("Olá, seja bem-vindo ao caixa!\n");
    troco();

    while(getchar() != '\n');
    getchar();
    
    return 0;
}