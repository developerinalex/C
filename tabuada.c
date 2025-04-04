#include <stdio.h>

int tabuada(int n);

int main(void){

    int numero, contas;

    printf("Digite um número de 1 a 10 para exibirmos a sua tabuada.\n");
    scanf("%d", &numero);

    contas = tabuada(numero);

    getchar();
    return 0;
}

int tabuada(int n){
    int resultado, multiplicador = 0;

    for(multiplicador = 0; multiplicador <= 10; multiplicador++){
        resultado = n * multiplicador;
        printf("%d x %d = %d\n", n, multiplicador, resultado);
    }
    return 0;
}