#include <stdio.h>

float registradora(float v);

int main(void){

    float valor = 0.0;

    printf("Registrando contas.\n");

    registradora(valor);


    getchar();
    return 0;
}

float registradora(float v){

    int produtos = 0;
    float pagamento = 0;
    float total = 0; 
    float troco = 0;
    
    do{
        printf("Insira o valor: ");
        scanf("%f", &v);
        if(v > 0){
            produtos++;
            total += v;
        }
    }while(v > 0);

    do {
        printf("Qual o total a ser pago: ");
        scanf("%f", &pagamento);
        if (pagamento < total) {
            printf("Valor insuficiente. Tente novamente.\n");
        }
    }while(pagamento < total);    

    troco = pagamento - total;

    if(v <= 0){
        printf("Quantidade de produtos: %d\n", produtos);
        printf("Total em R$ da compra: %.2f\n", total);
        printf("Valor pago pelo cliente: %.2f\n", pagamento);
        printf("Troco: %.2f\n", troco);
        printf("Fim do programa.\n");
    }

    return 0;
}