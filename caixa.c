#include <stdio.h>

int cedulas(int valor);

int main(void){

    int saque;

    printf("Disponível apenas cédulas de 100, 50, 20, 10 e 5.\n");

    do{
        printf("Digite o valor de saque: ");
        scanf("%d", &saque);
        if(saque < 5){
            printf("Valor solicitado inválido.\n");
        }
    }while(saque < 5);
    

    cedulas(saque);

    while(getchar() != '\n');
    getchar();
    return 0;
}

int cedulas(int valor){
    int notas[5] = {100, 50, 20, 10, 5};
    int i = 0;
    
    for(i = 0; i < 5; i++){
        int qtd = valor / notas[i];
        if(qtd > 0){
            printf("%d nota%s de R$%d fo%s usada%s.\n", qtd, qtd == 1 ? "" : "s", notas[i], qtd == 1 ? "i" : "ram", qtd == 1 ? "" : "s");
        }
        valor %= notas[i];
        if(valor == 0){
            break;
        }
    }

    return valor;
}