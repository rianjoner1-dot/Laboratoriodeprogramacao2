#ifndef LISTA_H
#define LISTA_H
#include <stdio.h>

typedef struct {
    int dados[5];
    int qnt;
} Lista;

Lista inicializarLista();
Lista inserirLista(Lista l, int valor);
Lista removerLista(Lista l, int valor);
Lista bubblesort(Lista l);
void imprimirLista(Lista l);


#endif