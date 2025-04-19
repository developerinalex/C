#include <stdio.h>
#include "funcoes.h"

int sld = 1000;
int valor = 0;
int seletor = 0;

struct usuario{ //simulando um usuario, utilizarei como banco de dados simples 
    const int id;
    int long cpf;
    char nome[100];
    float saldo;
    const int senha;
};

typedef struct usuario cliente;

cliente a1 = {1, 100, "Exemplo", 1000, 1234}; //cliente 0, existe só para testes

void menu(void){
    int *pSeletor = &seletor;

    puts("Bem-vindo ao caixa elerônico 2.0!");
    puts("===================================\n");
    printf("1. Sacar.\n2. Ver saldo.\n3. Ver extrato.\n4. Sair.\n");
    printf("\nDigite sua opção: ");
    scanf("%d", pSeletor);

    switch(*pSeletor){
        case 1:
            int *pValor = &valor;
            
            do{
                printf("Digite uma quantia válida: ");
                scanf("%d", pValor);
            }while(*pValor < 5);

            sacar(*pValor);
            break;
        case 2:
            saldo();
            break;
        case 3:
            extrato();
            break;
        case 4:
            sair();
            break;
    }
}

void sair(void){
    return;
}

void saldo(void){
    printf("Seu saldo é de: R$%d\n", sld);
    puts("1. Sacar\n2. Encerrar programa.");

    scanf("%d", &seletor);

    switch(seletor){
        case 1:
            int *pValor = &valor;
            
            do{
                printf("Digite uma quantia válida: ");
                scanf("%d", pValor);
            }while(*pValor < 5);

            sacar(*pValor);
            break;
        case 2:
            sair();
            break;
    }
}

void login(void){
    const int pin = 1234;
    int senha, i = 0, ttvs = 2;

    do{
        printf("Digite sua senha: ");
        scanf("%d", &senha);
        while(getchar() != '\n');

        if(senha == pin){
            menu();
            return;
        }
        
        if(ttvs > 0){
            printf("Senha incorreta, %d tentativa%s restante%s.\n", ttvs, ttvs == 1 ? "" : "s", ttvs == 1 ? "" : "s");
        }

        ttvs--;
        i++;
    }while(i < 3);

    printf("Operação encerrada, excedeu limite de tentativas.");

    while(getchar() != '\n');
    getchar();
}

int sacar(int valor){
    int notas[5] = {100, 50, 20, 10, 5};
    int i = 0;

    sld -= valor;

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

    printf("1. Encerrar programa.\n2. Exibir extrato.\n");
    scanf("%d", &i);

    if(i == 1){
        sair();
    }

    if(i == 2){
        extrato();
    }

    return valor;
}

void extrato(void){
    int saldoAnterior = sld + valor;

    printf("Saldo disponível: R$%d\n", sld);
    printf("Saldo anterior: R$%d\n", saldoAnterior);
    printf("Valor retirado: R$%d\n\n", valor);

    puts("1. Voltar ao menu.\n2. Encerrar operação.");
    scanf("%d", &seletor);

    if(seletor == 1){
        menu();
    }

    if(seletor == 2){
        sair();
    }

    while(getchar() != '\n');
    getchar();
}