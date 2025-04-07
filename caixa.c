#include <stdio.h>

int main(void){

    int saque;

    printf("Digite o valor de saque: ");
    scanf("%d", &saque);

    if(saque < 5){
        printf("Valor insuficiente, digite uma quantia válida: ");
        scanf("%d", &saque);
    }
}

