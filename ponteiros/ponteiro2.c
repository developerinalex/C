#include <stdio.h>

int main(void){

    static int x = 10;
    double y = 20.50;
    char z = 'a';

    
    double *pY;
    pY = &y;
    char *pZ;
    pZ = &z;

    int *resultado;
    resultado = &x;

    // pra chamar um ponteiro temos que utilizar %p e deixar explicíto o que queremos com um (void*)
    // observação: o endereço sempre vai mudar a cada nova execução 

    printf("valor x = %p\n", (void*)resultado);

    return 0;
}