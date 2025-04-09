#include <stdio.h>

int cedulas(int valor);
void login(void);
void menu(void);

int main(void){

    login();

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

void menu(void){
    printf("1. Sacar.\n");
}

void login(void){
    const int pin = 1234;
    int senha, i;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    for(i = 0; i < 3; i++){
        int ttvs = 2;
        if(senha == pin){
            menu();
        }
        else if(i = 3){
            printf("Operação encerrada, excedeu limite de tentativas.");
        }
        else{
            printf("Senha incorreta, %d tentativa%s restante%s.\n", ttvs, ttvs == 1 ? "" : "s", ttvs == 1 ? "" : "s");
            ttvs--;
        }
    }
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