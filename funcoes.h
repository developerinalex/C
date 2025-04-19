#ifndef FUNCOES_H
#define FUNCOES_H

void login(void);
void menu(void);
int sacar(int valor);
void saldo(void);
void extrato(void);
void sair(void);

extern int sld;
extern int valor;
extern int seletor;
extern struct usuario;

#endif