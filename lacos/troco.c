#include <stdio.h>
#include "troco.h"

void troco(void){
    int valorD = 0, valorP = 0;

    printf("Qual o total do seu débito? Digite aqui (valor mínimo = R$1): ");
    do{
        scanf("%d", &valorD);
        if(valorD < 1){
            printf("Valor inválido. Digite uma quantia válida: ");
        }
    }while(valorD < 1);

    do{
        printf("Digite o valor de pagamento: ");
        scanf("%d", &valorP);
    }while(valorP < valorD);

}

void tentativas(void){
    int ttvs = 2;

    printf("Lhe resta%s %d tentativa%s.", ttvs == 1 ? "" : "m", ttvs, ttvs == 1 ? "" : "s");
    ttvs--;

    if(ttvs == 0){
        printf("Limite de tentativas excedidas.");
        return;
    }
}