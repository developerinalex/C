#include <stdio.h>
#include "troco.h"

void troco(void){
    int valorD = 0, valorP = 0, valorT = 0, ttvs = 2;

    printf("Qual o total do seu débito? Digite aqui (valor mínimo = R$1): ");
    do{
        scanf("%d", &valorD);
        if(valorD < 1){
            if(ttvs > 0){
                printf("Lhe resta%s %d tentativa%s.\n", ttvs == 1 ? "" : "m", ttvs, ttvs == 1 ? "" : "s");
                printf("Valor inválido. Digite uma quantia válida: ");
            }
            else{
                printf("Limite de tentativas excedidas.");
                return;
            }
        }

        ttvs--;
    }while(valorD < 1);

    ttvs = 2;
    printf("Valor de pagamento: ");
    
    do{
        scanf("%d", &valorP);
        if(valorP < valorD){
            if(ttvs > 0){
                printf("Lhe resta%s %d tentativa%s.\n", ttvs == 1 ? "" : "m", ttvs, ttvs == 1 ? "" : "s");
                printf("Valor insuficiente, digite novamente: ");
            }
            else{
                printf("Limite de tentativas excedidas.");
                return;
            }
        }
        else{
            valorT = valorP - valorD;
        }

        ttvs--;
    }while(valorP < valorD);

    printf("Seu troco é de R$%d.", valorT);
}