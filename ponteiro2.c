#include <stdio.h>

int main(void){

    static int x = 10;
    double y = 20.50;
    char z = 'a';

    
    double *pY;
    pY = &y;
    char *pZ = &z;

    int *resultado;
    resultado = &x;

    printf("valor x = %p\n", (void*)resultado);

    return 0;
}