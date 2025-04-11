#include <stdio.h>
#include <locale.h>

float media(float nota);

int main(void){
    setlocale(LC_ALL, "Portuguese");

    printf("Bem-vindo ao sistema de notas.\n");

    media(0);

    getchar();
    return 0;
}

float media(float nota){
    float notas[3]; 
    int i = 0;
    float m = 0;

    do{
        printf("Nota da unidade: ");
        scanf("%f", &notas[i]);
        i++;
    }while(i < 3);

    m = (notas[0] + notas[1] + notas[2]) / 3;

    if(m >= 6){
        printf("Aprovado. Média final: %.2f\n", m);
    }
    else if(m < 6 && m >= 4){
        printf("Reprovado com direito a recuperação. Média final: %.2f\n", m);
    }
    else{
        printf("Reprovado. Média final: %.2f\n", m);
    }
}