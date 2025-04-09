#include <stdio.h>

int cedulas(int valor);
void login(void);
void menu(void);

int main(void){

    login();

    while(getchar() != '\n');
    getchar();
    return 1;
}

void menu(void){
    printf("1. Sacar.\n");
}

void login(void){
    const int pin = 1234;
    int senha, i, ttvs = 2;

    do{
        printf("Digite sua senha: ");
        scanf("%d", &senha);

        if(senha == pin){
            menu();
            break;
        }
        else if(i == 3){
            printf("Operação encerrada, excedeu limite de tentativas.");
        }
        else{
            printf("Senha incorreta, %d tentativa%s restante%s.\n", ttvs, ttvs == 1 ? "" : "s", ttvs == 1 ? "" : "s");
        }

        ttvs--;
        i++;
    }while(i < 3);
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