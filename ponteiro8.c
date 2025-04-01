#include <stdio.h>

int main(void){
    int vetor[3] = {1, 2, 3};
    int *pVet = vetor;  //em vetores não precisamos identificar o &

    printf("%d\n", *pVet);

    getchar();
    return 0;
}