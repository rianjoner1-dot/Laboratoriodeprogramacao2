#include <stdio.h>
#include "TADs.h"

int main() {
    printf("--- TESTE DA PILHA ---\n");
    Pilha p = inicializarPilha();
    
    for (int i = 1; i <= 6; i++) {
        p = push(p, i * 10); 
    }
    
    for (int i = 1; i <= 6; i++) {
        p = pop(p);
    }
    printf("\n--- TESTE DA FILA ---\n");
    Fila f = inicializarFila();
    
    // roda 2 vezes pra fazer insere 3 e tira 3
    for (int ciclo = 1; ciclo <= 2; ciclo++) {
        for (int i = 1; i <= 3; i++) {
            f = inserirFila(f, i);
        }
        for (int i = 1; i <= 3; i++) {
            f = removerFila(f);
        }
    }

    printf("\n--- TESTE DA LISTA ---\n");
    Lista l = inicializarLista();
    
    // bota 6 elementos e depois tira tudo
    for (int i = 1; i <= 6; i++) {
        l = inserirLista(l, i * 100);
    }

    for (int i = 1; i <= 6; i++) {
        l = removerLista(l, i * 100);
    }

    printf("\n--- TESTE DO BUBBLE SORT ---\n");
    // bota tudo baguncado pra testar o bubble
    l = inserirLista(l, 40);
    l = inserirLista(l, 10);
    l = inserirLista(l, 50);
    l = inserirLista(l, 20);
    l = inserirLista(l, 30);

    l = bubblesort(l);

    printf("\nTestes finalizados!\n");
    return 0;
}