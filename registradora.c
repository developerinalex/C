#include <stdio.h>

float registradora(float v);

int main(void){
    float valor;

    printf("Registrando contas.\n");

    registradora(valor);

}

float registradora(float v){

    int produtos;
    float pagamento = 0;
    float total = 0; 
    float troco = 0;
    
    do{
        printf("Insira o valor: ");
        scanf("%f", &v);
        produtos + 1;
        total = total + v;
    }while(v > 0);

    troco = pagamento - total;

    if(v <= 0){
        printf("Quantidade de produtos: %d\n", produtos);
        printf("Total em R$ da compra: %f\n", total);
        printf("Valor pago pelo cliente: %f\n", pagamento);
        printf("Troco: %f\n", troco);
        printf("Fim do programa.\n");
    }
}