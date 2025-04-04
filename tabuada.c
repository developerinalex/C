#include <stdio.h>

int tabuada(int n);

int main(void){

    int numero;

    printf("Digite um número de 1 a 10 para exibirmos a sua tabuada.\n");
    scanf("%d", &numero);

    while(numero < 1 || numero > 10){
        printf("Erro, digite um número válido.\n");
        scanf("%d", &numero);
    }

    tabuada(numero);

    getchar();
    return 0;
}

int tabuada(int n){
    int resultado, multiplicador = 0;
    char input;
    char *verificador = &input;


    for(multiplicador = 0; multiplicador <= 10; multiplicador++){
        resultado = n * multiplicador;
        printf("%d x %d = %d\n", n, multiplicador, resultado);
    }

    printf("Deseja continuar? (s/n): ");
    scanf(" %c", verificador);

    if(*verificador == 's'){
        printf("Digite outro número: ");
        scanf("%d", &n);
        tabuada(n);
    }
    else{
        printf("Fim do programa.\n");
    }
    return 0;
}   