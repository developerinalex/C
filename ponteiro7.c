#include <stdio.h>

struct lista{             //um novo tipo de variavel 
    int valor;
    struct lista *proximo;  //o tipo de variavel recebe um nome que é um ponteiro - SÓ ARMAZENA ENDEREÇOS
};

struct lista *procurarValor(struct lista *pLista, int valor){   //função que possui a variavel lista como saída e recebe lista ponteiro como uma das entradas 
    while(pLista != (struct lista *)0){
        if(pLista->valor == valor){
            return(pLista);
        }
        else{
            pLista = pLista->proximo;
        }
    }
    return(struct lista *)0;
}

int main(void){

    struct lista m1, m2, m3;   //criamos 3 tipos de lista
    struct lista *resultado, *gancho = &m1;  //criamos lista ponteiro resultado vazio e ponteiro gancho com valor 
    int valor;

    m1.valor = 5;  //atribuimos m1 a o variavel valor que esta dentro de lista
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;  //atribuimos m1 a variavel do tipo struct lista proximo com o endereço de m2 
    m2.proximo = &m3;
    m3.proximo = 0;

    printf("Digite valor da pesquisa: ");
    scanf("%d", &valor);

    resultado = procurarValor(gancho, valor);

    if(resultado == (struct lista *)0){
        printf("Valor não encontrado.\n");
    }
    else{
        printf("Valor %d encontrado.\n", resultado->valor);
    }

    getchar();
    return 0;
}