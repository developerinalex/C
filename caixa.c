#include <stdio.h>

int sacar(int valor);
void login(void);
void menu(void);
void saldo(void);
void extrato(void);
void sair(void);

int sld = 1000;
int valor = 0;

int main(void){
    login();

    while(getchar() != '\n');
    getchar();
    return 0;
}

void menu(void){
    int seletor = 0;
    int *pSeletor = &seletor;

    puts("Bem-vindo ao caixa elerônico 2.0!");
    puts("==================================\n");
    printf("1. Sacar.\n2. Ver saldo.\n3. Ver extrato.\n4. Sair.\n");
    printf("Digite sua opção: ");
    scanf("%d", pSeletor);

    system("clear");

    switch(*pSeletor){
        case 1:
            int *pValor = &valor;
            
            do{
                printf("Digite uma quantia válida: ");
                scanf("%d", pValor);
            }while(pValor < 5);

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

void extrato(void){
    int saldoAnterior = sld + valor;

    printf("Saldo disponível: R$%d\n", sld);
    printf("Saldo anterior: R$%d\n", saldoAnterior);
    printf("Valor retirado: R$%d\n\n", valor);

    puts("Press enter.");

    while(getchar() != '\n');
    getchar();
    system("clear");
}

void saldo(void){
    printf("Seu saldo é de: R$%d\n", sld);
    puts("Pressione enter para voltar ao menu.");

    while(getchar() != '\n');
    getchar();

    system("clear");
    menu();
}

void login(void){
    const int pin = 1234;
    int senha, i = 0, ttvs = 2;

    do{
        printf("Digite sua senha: ");
        scanf("%d", &senha);
        while(getchar() != '\n');

        if(senha == pin){
            system("clear");
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
    system("clear");
}

int sacar(int valor){
    int notas[5] = {100, 50, 20, 10, 5};
    int i = 0;
    
    int *pSld = &sld;

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

    *pSld -= valor;
    return valor;
}