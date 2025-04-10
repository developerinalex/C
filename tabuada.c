#include <stdio.h>

int tabuada(int n);

int main(void){

<<<<<<< HEAD
    int numero, conta;
=======
    int numero;
>>>>>>> 2.0

    printf("Digite um número de 1 a 10 para exibirmos a sua tabuada.\n");
    scanf("%d", &numero);

<<<<<<< HEAD
    conta = tabuada(numero);
=======
    tabuada(numero);
>>>>>>> 2.0

    getchar();
    return 0;
}

int tabuada(int n){
    int resultado, multiplicador = 0;
    char input;
    char *verificador = &input;

    while(n < 1 || n > 10){
        printf("Erro, digite um número válido.\n");
        scanf("%d", &n);
    }

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