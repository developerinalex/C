#include <stdio.h>
#include "troco.h"

int valorD = 0, valorP = 0, valorT = 0; 

void troco(void){
    int ttvs = 2;

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
        ttvs--;
    }while(valorP < valorD);

    valorT = valorP - valorD;

    if(valorT > 0){
        printf("Seu troco é de R$%d.", valorT);
        contador();
    }
    else{
        puts("Não há troco.");   
    }
}

void contador(void){
    int resultado = valorT, i = 0, cedulas[7] = {100, 50, 20, 10, 5, 2, 1};

    for(i = 0; i < 7; i++){
        resultado /= cedulas[i];
        if(resultado > 0){
            printf("%d nota%s de R$%d fo%s usada%s.\n", resultado, resultado == 1 ? "" : "s", cedulas[i], resultado == 1 ? "i" : "ram", resultado == 1 ? "" : "s");
        }
        resultado %= cedulas[i];
        if(resultado == 0){
            break;
        }
    }
}