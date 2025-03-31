#include <stdio.h>

struct horario {
    int hora, minuto, segundo;
};

int main(){
    

    struct horario agora, *depois;
    depois = &agora;

    depois->hora = 20; //ponteiro pra estrutura usa uma "seta" para atribuir, usar *depois.hora exibe um erro
    //colocar (*depois).hora resolve, porém é mais trabalhoso e menos intuitivo 
    depois->minuto = 80;
    depois->segundo = 50;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;

    printf("%d:%d:%d\n", antes.hora, antes.minuto, antes.segundo);
    return 0;
}