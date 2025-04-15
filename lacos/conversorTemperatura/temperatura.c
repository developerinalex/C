#include <stdio.h>
#include "temperatura.h"

void menu(void){
    puts("bem-vindo ao conversor de temperatura. O que você deseja fazer?");
    printf("1. Celsius para Fahrenheit.\n2. Fahrenheit para Celsius.\n3. Sair.\n");
}

void celsiusF(int celsius){
    int c = celsius, grauF = 0;

    grauF = (c * 9/5) + 32;

    printf("%d°F.\n", grauF);
    menu();
}