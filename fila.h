#ifndef FILA_H
#define FILA_H
#include <stdio.h>

typedef struct {
    int dados [5];
    int fim;
} Fila;

Fila inicializarFila();
Fila inserirFila(Fila f, int valor);
Fila removerFila(Fila f);

#endif