#include <stdio.h>

int main(void){

    struct lista{
        int valor;
        struct lista *proximo;  //eu tava com uma dúvida do pq esse ponteiro simplesmente não criar um loop obrigando ele a armazenar outra struct dentro dele até que eu 
        //que um ponteiro só armazena ENDEREÇO, ISSO DEIXA DE ARAMZENAR OUTRA STRUCT A PARTIR DO MOMENTO QUE TRANSFORMA-SE EM PONTEIRO!!!
    };

    struct lista m1, m2, m3;
    struct lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2; //a gente dar um endereço pra próximo
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0;

    while(gancho != (struct lista*)0){
        printf("%d\n", gancho->valor);
        gancho = gancho->proximo;
    }

    getchar();
    return 0;
}