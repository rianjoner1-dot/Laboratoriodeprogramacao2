#include <stdio.h>
#include "TADs.h"

int main() {
    printf("--- Iniciando Testes ---\n\n");

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
    
    // O laço externo roda 2 vezes para fazer os dois ciclos de (insere 3, remove 3)
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
    
    // Inserindo 6 elementos dps removendo eles
    for (int i = 1; i <= 6; i++) {
        l = inserirLista(l, i * 100);
    }

    for (int i = 1; i <= 6; i++) {
        l = removerLista(l, i * 100);
    }

    printf("\nTestes finalizados!\n");
    return 0;
}