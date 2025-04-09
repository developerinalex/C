#include <stdio.h>

int sacar(int valor);
void login(void);
void menu(void);
void saldo(void);

int main(void){
    login();

    while(getchar() != '\n');
    getchar();
    return 1;
}

void menu(void){
    int seletor = 0;
    int *pSeletor = &seletor;

    puts("Bem-vindo ao caixa elerônico 2.0!");
    puts("==================================\n");
    printf("1. Sacar.\n2. Ver saldo.\n3. Ver extrato.\n4. Sair.\n");
    printf("Digite sua opção: ");
    scanf("%d", pSeletor);

    switch(*pSeletor){
        case 1: 
            int valor = 0;
            printf("Digite um valor: ");
            scanf("%d", &valor);

            sacar(valor);
            break;
        case 2:
            saldo();
            break;
        case 3:
    }
}

void saldo(void){
    float sld = 1000;
    printf("Seu saldo é de: %f\n", sld);
    puts("Pressione enter para voltar ao menu.");

    getchar();
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
}

int sacar(int valor){
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