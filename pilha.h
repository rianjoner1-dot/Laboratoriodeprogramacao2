#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>

typedef struct {
    int dados[5]; //tam 5 igual na desc da atv
    int topo;
} Pilha;

Pilha inicializarPilha();
Pilha push(Pilha p, int valor);
Pilha pop(Pilha p);

#endif