#include <stdio.h>
#include "temperatura.h"

void menu(void){
    int seletor = 0;

    puts("Bem-vindo ao conversor de temperatura. O que você deseja fazer?");

    do{
        printf("1. Celsius para Fahrenheit.\n2. Fahrenheit para Celsius.\n3. Sair.\n");

        while(scanf("%d", &seletor) != 1){ //faz com que seja impossivel digitar algo diferente de um int
            puts("Opção inválida, digite um número inteiro.");
            limparBuffer(); //limpa o buffer para o scanf funcionar corretamente 
        }

        switch(seletor){
            case 1:
                celsiusF();
                break;
            case 2:
                fahrenheitC();
                break;
            case 3:
                printf("\nPrograma encerrado, até a próxima.");
                return;
                break;
            default:
                printf("Opção inválida, digite algo válido.\n");
                break;
        }
    }while(seletor != 3); //garante que a função seja repetida até que o usuário deseje encerrar o programa
}

void celsiusF(void){ //converte celsius para fahrenheit
    int c = 0, grauF = 0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &c);

    grauF = (c * 9/5) + 32;

    printf("%d°F.\n", grauF);

    limparBuffer();
}

void fahrenheitC(void){ //converte fahrenheit para celsius
    int f = 0, grauC = 0;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &f);

    grauC = (f - 32) * 5/9;

    printf("%d°C.\n", grauC);

    limparBuffer(); 
}

void limparBuffer(void){ //limpa o buffer até o fim da linha
    int lixo;
    while((lixo = getchar()) != '\n' && lixo != EOF);
}