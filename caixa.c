#include <stdio.h>

int cedulas(int valor);

int main(void){

    int saque;

    printf("Dísponivel apenas cédulas de 100, 50, 20, 10 e 5. Por favor, digite um valor que atenda a observção.\n");

    printf("Digite o valor de saque: ");
    scanf("%d", &saque);

    cedulas(saque);

    getchar();
    return 0;
}

int cedulas(int valor){
    int notas[5] = {100, 50, 20, 10, 5};
    int i = 0;
    
    for(i = 0; i < 5; i++){
        int qtd = valor / notas[i];
        if(qtd > 0){
            printf("%d notas de R$%d foram usadas.\n", qtd, notas[i]);
        }
        valor %= notas[i];
        if(valor == 0){
            break;
        }
    }

    return valor;
}