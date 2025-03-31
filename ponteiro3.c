#include <stdio.h>

struct horario {
    int hora, minuto, segundo;
};

int main(){
    

    struct horario agora, *depois;
    depois = &agora;

    depois->hora = 20;
    depois->minuto = 20;
    depois->segundo = 20;

    printf("%d:%d:%d\n", agora.hora, agora.minuto, agora.segundo);
    return 0;
}