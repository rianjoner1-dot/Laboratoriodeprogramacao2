#include "pilha.h"

Pilha inicializarPilha() {
  Pilha p;
  p.topo = 0; // Inicializa o topo como 0 indicando que a pilha está vazia
  return p;
}

Pilha push(Pilha p, int valor) {
  if (p.topo < 5) {
    p.dados[p.topo] = valor;
    p.topo++;
    printf("\nPilha: inseriu %d\n", valor);
  } else {
    printf("\nPilha cheia! Não é possível inserir %d\n", valor);
  }
  return p;
}

Pilha pop(Pilha p) {
  if (p.topo > 0) {
    p.topo--;
    printf("\nPilha: removeu %d\n", p.dados[p.topo]);
  } else {
    printf("\nPilha vazia! Não é possível remover elementos\n");
  }
  return p;
}