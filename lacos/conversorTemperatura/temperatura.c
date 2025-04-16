#include <stdio.h>
#include "temperatura.h"

void menu(void){
    int seletor = 0;

    puts("bem-vindo ao conversor de temperatura. O que você deseja fazer?");
    printf("1. Celsius para Fahrenheit.\n2. Fahrenheit para Celsius.\n3. Sair.\n");
    scanf("%d", &seletor);

    switch(seletor){
        case 1:
            celsiusF();
            break;
        case 2:
            fahrenheitC();
            break;
        case 3:
            return;
            break;
    }
}

void celsiusF(void){
    int c = 0, grauF = 0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &c);

    grauF = (c * 9/5) + 32;

    printf("%d°F.\n", grauF);

    while(getchar() != '\n');
    getchar();

    menu();
}

void fahrenheitC(void){
    int f = 0, grauC = 0;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &f);

    grauC = (f - 32) * 5/9;

    printf("%d°C.\n", grauC);

    while(getchar() != '\n');
    getchar();
    
    menu();
}