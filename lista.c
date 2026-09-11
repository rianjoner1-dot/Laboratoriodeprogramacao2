#include "lista.h"

Lista inicializarLista() {
  Lista l;
  l.qnt = 0;
  return l;
}

Lista inserirLista(Lista l, int valor) {
  if (l.qnt < 5) {
    l.dados[l.qnt] = valor;
    l.qnt++;
    printf("inseriu %d\n", valor);
  } else {
    printf("\nerro lista cheia \n");
  }
  return l;
}

Lista removerLista(Lista l, int valor) {
  int i, pos = -1;
  for (i = 0; i < l.qnt; i++) {
    if (l.dados[i] == valor) {
      pos = i;
      break;
    }
  }

  if (pos != -1) {
    printf("lista : removeu %d da pos %d\n", valor, pos);
    for (i = pos; i < l.qnt - 1; i++) {
      l.dados[i] = l.dados[i + 1];
    }
    l.qnt--;
  } else {
    if (l.qnt == 0) {
      printf("lista vazia\n");
    } else {
      printf("valor nao encontrado\n");
    }
  }
  return l;
}

Lista bubblesort(Lista l) {

  int i = 0, j = 0, aux = 0, tam = 0;
  printf("a lista tem %d campos validos", l.qnt);
  printf("\na lista desordenada é: ");
  imprimirLista(l);
  for (i = 0; i < l.qnt - 1; i++) {
    for (j = 0; j < l.qnt - 1; j++) {
      if (l.dados[j] > l.dados[j + 1]) {
        aux = l.dados[j];
        l.dados[j] = l.dados[j + 1];
        l.dados[j + 1] = aux;
      }
    }
  }
  printf("\na lista ordenada é: ");
  imprimirLista(l);
  return l;
}

void imprimirLista(Lista l) {
  if (l.qnt == 0) {
    printf("[ ] (vazia)\n");
    return;
  }
  printf("[ ");
  for (int i = 0; i < l.qnt; i++) {
    printf("%d ", l.dados[i]);
  }
  printf("]\n");
}
