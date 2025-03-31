#include <stdio.h>


void testeVariavel(int x);
void testePonteiro(int *pX);

int main(void){
    int teste = 1;
    int *pTeste = &teste;

    //testeVariavel(teste);
    testePonteiro(pTeste);

    printf("%d", teste);

    getchar();
    return 0;
}
void testeVariavel(int x){
    ++x;
}
void testePonteiro(int *pX){
    ++*pX;
}